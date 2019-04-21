#include "navigator.h"
Navigator::Navigator(Strategy *strategy)
{
    str = strategy;
}

//void Navigator::setStrategy(Strategy *strategy)
//{
//    strategy = new ConcreteStrategyA();
//}

int Navigator::executeStrategy(int a , int b)
{
    return str->execute(a,b);
}
