#pragma once
#include "IsoscelesTriangle.h"


//равносторонний треугольник (все стороны равны, все углы равны 60);
class EquilateralTriangle : public IsoscelesTriangle {

public:
    EquilateralTriangle(string name_, int side_a_, int angle_A);

};
