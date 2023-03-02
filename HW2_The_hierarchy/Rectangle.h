#pragma once
#include "Parallelogram.h"

//прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90);
class Rectangle : public Parallelogram {

public:
    Rectangle(string name_, int side_a_, int side_b_);

};
