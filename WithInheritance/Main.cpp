#include "Animal.h"
#include"Mammal.h"
#include"Fish.h"
#include<iostream>

using namespace std;
int main(){
	Animal*animals[2];
	
	animals[0] = new Mammal("gato", 3.0, "omnivoro");
	animals[0]->showInfo();
	animals[1] = new Fish("trucha", 3.0, "agua dulce");
	animals[1]->showInfo();
	return 0;
};
