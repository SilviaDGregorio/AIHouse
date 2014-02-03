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
	Components(string _name, double _min, double _max);
	~Components();
	Components(Components* _com);
	void setName(string _name);
	void setMin(double _min){minPower=_min;};
	void setMax(double _max){maxPower=_max;};
	string getName(){return name;};
	double getMin(){return minPower;};
	double getMax(){return maxPower;};


private:
	string name;
	double minPower;
	double maxPower;
};