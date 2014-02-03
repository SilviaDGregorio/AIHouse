#include <iostream>
#include "../include/AIHouse.h"

using namespace std;

int main(){
AIHouse * aihouse= new AIHouse(100);
	aihouse->readComponents();
	aihouse->calculatePower();

   /* std::cout << "The map has " << aihouse->getComponentsMap().size() << " enrties:\n";
    for(auto i=aihouse->getComponentsMap().begin(); i!=aihouse->getComponentsMap().end(); ++i)
        std::cout << i->first << " => " << i->second << '\n';
*/

}