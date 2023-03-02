#include "Parallelogram.h"
#include "Rectangle.h"
#include "Exception.h"


    Rectangle::Rectangle(string name_, int side_a_, int side_b_) : Parallelogram(name_, side_a_, side_b_, 90, 90) 
    {
        if (((angle_A != 90) || ( angle_B != 90) || (angle_D != 90) || (angle_C != 90)) ||
            ((side_a_ != side_c) || (side_b_ != side_d))) {
            throw CreateFigureException("Ошибка создания фигуры " + name_);
        }
    }

