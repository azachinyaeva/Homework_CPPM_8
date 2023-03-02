#include "Parallelogram.h"
#include "Rhombus.h"
#include "Exception.h"


    Rhombus::Rhombus(string name_, int side_a_, int angle_A_, int angle_B_)
        : Parallelogram(name_, side_a_, side_a_, angle_A_, angle_B_) 
    {
        if (((angle_A_ != angle_C) || (angle_D != angle_B_)) ||
            ((side_a_ != side_b) || (side_c != side_d) || (side_a_ != side_c))) {
            throw CreateFigureException("Ошибка создания фигуры " + name_);
        }
    }

