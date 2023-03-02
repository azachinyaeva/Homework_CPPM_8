#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Exception.h"



//параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны);

    Parallelogram::Parallelogram(string name_, int side_a_, int side_b_,
        int angle_A_, int angle_B_) : Quadrangle(name_, side_a_, side_b_, side_a_, side_b_,
            angle_A_, angle_B_, angle_A_, angle_B_) 
    {
        if ( ((angle_A_ != angle_C) || (angle_D != angle_B_)) ||
            ((side_a_ != side_c) || (side_b_ != side_d)) ) {
            throw CreateFigureException("Ошибка создания фигуры " + name_);
        }
    }
