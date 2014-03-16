#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <memory>
#include <QPushButton>
using namespace std;
class Components{
public:
	typedef shared_ptr<Components> pointer;
	Components();
    Components(string _name, double power,QPushButton* button);
	~Components();
	Components(Components* _com);
	void setName(string _name);
	void setPower(double _power){power=_power;};
    void setLabel(QPushButton * button){button=button;};
	string getName(){return name;};
	double getPower(){return power;};
    QPushButton* getButton(){return button;};


private:
	string name;
	double power;
    QPushButton *button;
};
