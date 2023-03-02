#pragma once
#include "Parallelogram.h"

//ромб (все стороны равны, углы A,C и B,D попарно равны).
class Rhombus : public Parallelogram {

public:
    Rhombus(string name_, int side_a_, int angle_A_, int angle_B_);

};