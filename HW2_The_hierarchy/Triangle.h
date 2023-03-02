#pragma once
#include "Figure.h"

//треугольник
class Triangle : public Figure {
public:

    Triangle(string name_, int side_a_, int side_b_, int side_c_,
        int angle_A_, int angle_B_, int angle_C_);

    void get_info();

protected:
    string name;
    int side_a, side_b, side_c;
    int angle_A, angle_B, angle_C;
};
