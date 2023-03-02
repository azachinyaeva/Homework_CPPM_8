#include "Triangle.h"
#include "IsoscelesTriangle.h"
#include "Exception.h"


     IsoscelesTriangle::IsoscelesTriangle(string name_, int side_a_, int side_c_,
        int angle_A_, int angle_C_) : Triangle(name_, side_a_, side_c_, side_a_,
            angle_A_, angle_C_, angle_A_) {
         if ((angle_A_ != angle_C_) || (side_a_ != side_c_)) {
             throw CreateFigureException("Ошибка создания фигуры " + name_);
         }

    }
