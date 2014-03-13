#include "../include/Components.h"

	Components::Components(){
		name="";
		power=0.0;

	};
	Components::Components(string _name, double _power){
		name=_name;
		power=_power;

	};
	Components::Components(Components * _com){
		name=_com->name;
		power=_com->power;
	};
	Components::~Components(){
		name="";
		power=0.0;
	};
	void Components::setName(string _name){
		name=_name;
	};
	
