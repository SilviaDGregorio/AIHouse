#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <memory>
using namespace std;
class Components{
public:
	typedef shared_ptr<Components> pointer;
	Components();
	Components(string _name, double power);
	~Components();
	Components(Components* _com);
	void setName(string _name);
	void setPower(double _power){power=_power;};

	string getName(){return name;};
	double getPower(){return power;};



private:
	string name;
	double power;
};