#include "../include/AIHouse.h"

using namespace std;

	double AIHouse::getPower(){
		return power;
	}
	void AIHouse::setConsumo(double _power){
		power=_power;
	}
	AIHouse::AIHouse(){
		power=0.0;
	

	}
	AIHouse::~AIHouse(){
		

	};
	AIHouse::AIHouse(double _power){
		power=_power;
	}
	void AIHouse::readComponents(){
		string cadena;
		vector<string> listastring;
		ifstream myReadFile;
		string buf; // Have a buffer string
    	Components::pointer component(new Components);
    	
 		myReadFile.open("consumos.txt");
 		if (myReadFile.is_open()) {
 			cout<<"Hola"<<endl;
 			while (!myReadFile.eof()) {
 				
   				getline(myReadFile,cadena);
    			stringstream ss(cadena); 
    			ss>>buf;
    			component->setName(buf);
    			ss>>buf;
    			component->setPower(atof(buf.c_str()));
    			componentsMap[component->getName()]=component->getPower();
    			componentsVector.push_back(component);
    			cout<<buf<<endl;
 			}
		}
		cout<<componentsVector.size()<<endl;
		cout<<componentsMap.size()<<endl;
		myReadFile.close();

	}
	void AIHouse::calculatePower(){
		vector<Components::pointer> vectorfinal;
		std::map<string,double>::iterator it=componentsMap.begin();
		recursivo(power,0,vectorfinal,it);

	}
	vector<Components::pointer> AIHouse::recursivo(double power,double cantalmacenada,vector<Components::pointer> vectorfinal,std::map<string,double>::iterator it){
	Components::pointer component(new Components);

		if(cantalmacenada==power){
			cout<<"final"<<endl;
			return vectorfinal;
		}
		else{
			if(power-it->second>=0){
				{
				
				component->setName(it->first);
				component->setPower(it->second);
				vectorfinal.push_back(component);
				cout<<component->getName()<<endl;
				recursivo(power,(cantalmacenada+it->second),vectorfinal,it);
				}
			}
			else{
				recursivo(power,cantalmacenada,vectorfinal,it++);
			}

		}


	}