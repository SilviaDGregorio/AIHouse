#include "../include/Components.h"

	Components::Components(){
		name="";
		minPower=0.0;
		maxPower=0.0;
	};
	Components::Components(string _name, double _min, double _max){
		name=_name;
		minPower=_min;
		maxPower=_max;

	};
	Components::Components(Components * _com){
		name=_com->name;
		minPower=_com->minPower;
		maxPower=_com->maxPower;
	};
	Components::~Components(){name="";};
	void Components::setName(string _name){
		name=_name;
	};
	