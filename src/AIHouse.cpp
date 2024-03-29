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
		power=0.0;

	};
	AIHouse::AIHouse(double _power){
		power=_power;
	}
	void AIHouse::readComponents(){
        /*string cadena;
		vector<string> listastring;
		ifstream myReadFile;
		string buf; // Have a buffer string
    	Components::pointer component(new Components);
    	
 		myReadFile.open("componentes.txt");
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
 			}
		}
		cout<<componentsMap.size()<<endl;
		myReadFile.close();
        for(auto i=componentsMap.begin(); i!=componentsMap.end(); ++i)
        std::cout << i->first << " => " << i->second << '\n';
	*/
	}
    vector<Components::pointer> AIHouse::calculatePower(){
		vector<Components::pointer> vectorfinal;

		double p=0.0;
        vectorfinal=recursivo(power,p,vectorfinal,0);
		cout<<vectorfinal.size()<<endl;
		for(Components::pointer p:vectorfinal){
				cout<<p->getName()<<endl;
			}
    return vectorfinal;
	}
     vector<Components::pointer> AIHouse::recursivo(double power,double &cantalmacenada,vector<Components::pointer> vectorfinal,unsigned iterator){
	Components::pointer component(new Components);
		if(cantalmacenada==power){
			return vectorfinal;
		}
        else if(iterator>=componentsVector.size()){
			return vectorfinal;
		}
		else{

				double cant1=0.0, cant2=0.0;
				vector<Components::pointer> vectorfinal1,vectorfinal2;
                if(cantalmacenada+componentsVector.at(iterator)->getPower()<=power){
					
                    component->setName(componentsVector.at(iterator)->getName());
                    component->setPower(componentsVector.at(iterator)->getPower());
                    component->setLabel(componentsVector.at(iterator)->getButton());
					vectorfinal.push_back(component);
					
					cant1=cantalmacenada+component->getPower();
					
                    vectorfinal1 = recursivo(power,cant1,vectorfinal,++iterator);

					iterator--;
					vectorfinal.erase(vectorfinal.end());	
					
				}
				cant2=cantalmacenada;
									
                vectorfinal2=recursivo(power,cant2,vectorfinal,++iterator);
				if(cant1>cant2){
					vectorfinal=vectorfinal1;
					cantalmacenada=cant1;
				}
				else{
					vectorfinal=vectorfinal2;
					cantalmacenada=cant2;
				}				
			
		}
		return vectorfinal;
	}
    int AIHouse::itIncrement(int it){
        int iter=++it;
		return iter;
	}
