#pragma once
#include "Quadrangle.h"

//�������������� (������� a,c � b,d ������� �����, ���� A,C � B,D ������� �����);
class Parallelogram : public Quadrangle {

public:
    Parallelogram(string name_, int side_a_, int side_b_,
        int angle_A_, int angle_B_);

};
