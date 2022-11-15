#include "Animal.h"
#include"Mammal.h"

#include<iostream>

using namespace std;
int main(){
	Animal*animals[3];
	
	animals[0] = new Mammal("animal", 3, "food");
	animals[0]->showInfo();
	return 0;
};
