#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "../include/Components.h"
#include <unordered_map>
class AIHouse{
public:
	typedef std::unordered_map<std::string, double> ComponentsMap;
	AIHouse();
	AIHouse(double _power);
	~AIHouse();
	double getPower();
	void setConsumo(double _power);
	void calculatePower();
	void readComponents();
	ComponentsMap getComponentsMap(){return componentsMap;};
private:
	double power;
	vector<Components::pointer> componentsVector;
	ComponentsMap componentsMap;
};