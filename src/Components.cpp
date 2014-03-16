#include "../include/Components.h"

	Components::Components(){
		name="";
		power=0.0;

	};
    Components::Components(string _name, double _power ,QPushButton* _button){
		name=_name;
		power=_power;
        button=_button;

	};
	Components::Components(Components * _com){
		name=_com->name;
		power=_com->power;
        button=_com->button;
	};
	Components::~Components(){
		name="";
		power=0.0;
        button=NULL;
        delete button;
    };
	void Components::setName(string _name){
		name=_name;
	};
	
