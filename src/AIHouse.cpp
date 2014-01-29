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
    	
 		myReadFile.open("consumos.txt");
 		if (myReadFile.is_open()) {
 			cout<<"Hola"<<endl;
 			while (!myReadFile.eof()) {
   				getline(myReadFile,cadena);
    			stringstream ss(cadena); // Insert the string into a stream
    			while(ss>>buf){
    				cout<<buf<<endl;
    				listastring.push_back(buf);
    			}
 			}
		}
		myReadFile.close();
	}