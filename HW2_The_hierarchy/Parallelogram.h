#pragma once
#include "Quadrangle.h"

//параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны);
class Parallelogram : public Quadrangle {

public:
    Parallelogram(string name_, int side_a_, int side_b_,
        int angle_A_, int angle_B_);

};
