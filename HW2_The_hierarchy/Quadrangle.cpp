#include "Figure.h"
#include "Quadrangle.h"
#include "Exception.h"


    Quadrangle::Quadrangle(string name_, int side_a_, int side_b_, int side_c_, int side_d_,
        int angle_A_, int angle_B_, int angle_C_, int angle_D_) : Figure(name_) {
        if (angle_A_ + angle_B_ + angle_C_ + angle_D_!= 360) {
            throw CreateFigureException("Ошибка создания фигуры " + name_);
        }
        else {
            name = name_;
            side_a = side_a_;
            side_b = side_b_;
            side_c = side_c_;
            side_d = side_d_;
            angle_A = angle_A_;
            angle_B = angle_B_;
            angle_C = angle_C_;
            angle_D = angle_D_;
        }
    }

    void Quadrangle::get_info() {
        cout << this->name << ": " << '\n';
        cout << "Стороны: " << "a = " << this->side_a << " b = " << this->side_b
            << " c = " << this->side_c << " d = " << this->side_d << '\n';
        cout << "Углы: " << "A = " << this->angle_A << " B = " << this->angle_B
            << " C = " << this->angle_C << " D = " << this->angle_D << '\n';
        cout << endl;
    }
