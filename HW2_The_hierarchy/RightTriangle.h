#pragma once
#include "Triangle.h"

//������������� ����������� (���� C ������ ����� 90);
class RightTriangle : public Triangle {

public:
    RightTriangle(string name_, int side_a_, int side_b_, int side_c_,
        int angle_A_, int angle_B_);

};