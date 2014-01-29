#include <iostream>
class AIHouse{
public:
	AIHouse();
	AIHouse(double _consumo);
	~AIHouse();
	double getConsumo();
	void setConsumo(double _consumo);
private:
	double consumo;
};