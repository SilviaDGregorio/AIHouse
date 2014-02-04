#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "../include/Components.h"
#include <map>
class AIHouse{
public:
	typedef std::map<std::string, double> ComponentsMap;
	AIHouse();
	AIHouse(double _power);
	~AIHouse();
	double getPower();
	void setConsumo(double _power);
	void calculatePower();
	void readComponents();
	ComponentsMap getComponentsMap(){return componentsMap;};
	vector<Components::pointer> recursivo(double power,double &cantalmacenada,vector<Components::pointer> vectorfinal,std::map<string,double>::iterator it);
private:
	double power;
	ComponentsMap componentsMap;
};