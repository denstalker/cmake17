#include <iostream>
#include "shape.h"

using namespace std;

class Line : public Shape
{
public:
    void boundingBox();
    void createManipulator();

};
