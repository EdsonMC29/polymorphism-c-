#ifndef ANIMAL_H
#define ANIMAL_H
#include<iostream>
using namespace std;
class Animal{
  public:
    Animal(string,float);
    virtual void showInfo();
  private:
    string name;
    float weight;
};
#endif
