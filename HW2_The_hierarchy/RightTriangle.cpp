#include "Triangle.h"
#include "RightTriangle.h"
#include "Exception.h"


//прямоугольный треугольник (угол C всегда равен 90);

    RightTriangle::RightTriangle (string name_, int side_a_, int side_b_, int side_c_,
        int angle_A_, int angle_B_) : Triangle(name_, side_a_, side_b_, side_c_,
            angle_A_, angle_B_, 90)
    {
        if (angle_C != 90) {
            throw CreateFigureException("Ошибка создания фигуры " + name_);
        }
    }
