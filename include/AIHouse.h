#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
class AIHouse{
public:
	AIHouse();
	AIHouse(double _power);
	~AIHouse();
	double getPower();
	void setConsumo(double _power);
	void calculatePower();
private:
	double power;
};