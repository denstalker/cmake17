//Класс контекста
#include <iostream>
#include "strategy.h"
using namespace std;

class ConcreteStrategyB : public Strategy
{
public:
    int execute(int, int);
};

