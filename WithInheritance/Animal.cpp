#include "Animal.h"
#include<iostream>

using namespace std;

Animal::Animal(string n, float w){
	name = n;
	weight = w;
}

void Animal::showInfo(){
	cout<<"Name: "<<name<<endl;
	cout<<"Weight: "<<weight<<" Kg."<<endl;
}
