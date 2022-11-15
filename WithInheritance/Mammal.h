#ifndef MAMMAL_H
#define MAMMAL_H
#include "Animal.h"
#include<iostream>
using namespace std;
class Mammal : public Animal{
	public:
		Mammal(string,float, string);
		void showInfo();
	private:
		string food;
};
#endif
