//Класс контекста
#include <iostream>
#include "strategy.h"
using namespace std;

class ConcreteStrategyA : public Strategy
{
public:
    int execute(int,int);
};

