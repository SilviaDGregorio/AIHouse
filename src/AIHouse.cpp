#include "../include/AIHouse.h"

using namespace std;

	double AIHouse::getConsumo(){
		return consumo;
	}
	void AIHouse::setConsumo(double _consumo){
		consumo=_consumo;
	}
	AIHouse::AIHouse(){
		consumo=0.0;
	}
	AIHouse::AIHouse(double _consumo){
		consumo=_consumo;
	}