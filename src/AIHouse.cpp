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
	AIHouse::AIHouse(double _power){
		power=_power;
	}
	void AIHouse::calculatePower(){
		string cadena;
		vector<string> listastring;
		ifstream myReadFile;
		string buf; // Have a buffer string
    	Components::pointer component;
 		myReadFile.open("consumos.txt");
 		if (myReadFile.is_open()) {
 			cout<<"Hola"<<endl;
 			while (!myReadFile.eof()) {
   				getline(myReadFile,cadena);
    			stringstream ss(cadena); 
    			ss>>buf;
    			component->setName("hola");
/*
    			ss>>buf;
    			component->setMin(atof(buf.c_str()));
    			ss>>buf;
    			component->setMax(atof(buf.c_str()));
    			//componentsMap[component->getName()]=(component->getMin()-component->getMax());
    			componentsVector.push_back(component);
 			*/}
		}
		myReadFile.close();
	}