#include "Mammal.h"
#include<iostream>
using namespace std;

Mammal::Mammal(string n, float w, string f) : Animal(n, w){
	food = f;
}

void Mammal:: showInfo(){
	cout<<"name: "<<name<<endl;
	cout<<"Weight: "<<weight<<" Kg."<<endl;
	cout<<"Food: "<<food<<endl;
}
