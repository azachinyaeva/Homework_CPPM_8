#pragma once
#include "Figure.h"

//четырёхугольник
class Quadrangle : public Figure {
public:
    Quadrangle(string name_, int side_a_, int side_b_, int side_c_, int side_d_,
        int angle_A_, int angle_B_, int angle_C_, int angle_D_);

    void get_info();

protected:
    string name;
    int side_a, side_b, side_c, side_d;
    int angle_A, angle_B, angle_C, angle_D;

};