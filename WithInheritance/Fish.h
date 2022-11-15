#ifndef FISH_H
#define FISH_H
#include "Animal.h"
#include<iostream>
using namespace std;
class Fish : public Animal{
	public:
		Fish();
		~Fish()=default;
		Fish(string,float, string);
		string getName();
		float getWeight();
		string getHabitat();
		void showInfo();
	private:
		string habitat;
};
#endif
