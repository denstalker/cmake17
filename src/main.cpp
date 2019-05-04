#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QApplication>


#include <iostream>
using namespace std;
#include "navigator.h"
#include "strategy.h"
#include "concretestrategya.h"
#include "concretestrategyb.h"
#include "concretestrategyc.h"
int main()
{

    Navigator nav(new ConcreteStrategyC());
    Navigator * navi = new Navigator(new ConcreteStrategyB());

    cout << navi->executeStrategy(4,55) << endl;

    cout << nav.executeStrategy(2,6) << endl;







//    cout << nav.executeStrategy(2,2);
    return 0;
}
