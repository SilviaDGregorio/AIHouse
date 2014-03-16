#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "../include/Components.h"
#include <map>
class AIHouse{
public:
    std::vector<Components::pointer> componentsVector;
	AIHouse();
	AIHouse(double _power);
	~AIHouse();
	double getPower();
	void setConsumo(double _power);
    vector<Components::pointer> calculatePower();
	void readComponents();
    std::vector<Components::pointer>  getComponentsMap(){return componentsVector;};
    vector<Components::pointer> recursivo(double power,double &cantalmacenada,vector<Components::pointer> vectorfinal,unsigned iterator);
    int itIncrement(int index);
private:
	double power;

};
