//Strategy
#ifndef STRATEGY_H
#define STRATEGY_H
//Класс контекста
#include <iostream>

using namespace std;

class Strategy
{
public:

    virtual int execute(int, int) = 0;
};
#endif // STRATEGY_H
