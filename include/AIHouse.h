#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "../include/Components.h"
#include <unordered_map>
class AIHouse{
public:
	AIHouse();
	AIHouse(double _power);
	~AIHouse();
	double getPower();
	void setConsumo(double _power);
	void calculatePower();
	std::unordered_map<std::string, double> getComponentsMap(){return componentsMap;};
private:
	double power;
	vector<Components::pointer> componentsVector;
	std::unordered_map<std::string, double> componentsMap;
};