#include "Rhombus.h"
#include "Square.h"
#include "Exception.h"


    Square:: Square(string name_, int side_a_)
        : Rhombus(name_, side_a_, 90, 90) 
    {
        if (((angle_A != 90) || (angle_B != 90) || (angle_D != 90) || (angle_C != 90)) ||
            ((side_a_ != side_b) || (side_c != side_d) || (side_a_ != side_c))) {
            throw CreateFigureException("Ошибка создания фигуры " + name_);
        }
    }

