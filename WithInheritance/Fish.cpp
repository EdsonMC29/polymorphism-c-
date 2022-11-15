#include "Animal.h"
#include "Fish.h"
#include<iostream>
using namespace std;

Fish::Fish(string n, float w, string h) : Animal(n, w){
	habitat = h;
}
string Fish::getHabitat(){
	return habitat;
}

void Mammal:: showInfo(){
	cout<<"name: "<<getName()<<endl;
	cout<<"Weight: "<<getWeight()<<" Kg."<<endl;
	cout<<"Food: "<<getHabitat()<<endl;
}
