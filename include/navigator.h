//navigator.h
#ifndef NAVIGATOR_H
#define NAVIGATOR_H

//Класс контекста
#include <iostream>
#include "strategy.h"
//#include "concretestrategya.h"
//#include "concretestrategyb.h"
//#include "concretestrategyc.h"

using namespace std;

class Navigator
{
private:
    Strategy * str;

public:
    Navigator(Strategy * strategy);
    //void setStrategy();
    int executeStrategy(int,int);
};

#endif // NAVIGATOR_H
