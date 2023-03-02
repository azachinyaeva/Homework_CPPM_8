#include "Triangle.h"
#include "Exception.h"

//треугольник

    Triangle::Triangle(string name_, int side_a_, int side_b_, int side_c_,
        int angle_A_, int angle_B_, int angle_C_) : Figure(name_) {
        if (angle_A_ + angle_B_ + angle_C_ != 180) {
            throw CreateFigureException("Ошибка создания фигуры "+ name_);
        }
        else {
            name = name_;
            side_a = side_a_;
            side_b = side_b_;
            side_c = side_c_;
            angle_A = angle_A_;
            angle_B = angle_B_;
            angle_C = angle_C_;

        }
    }

    void Triangle::get_info() {
        cout << this->name << ": " << '\n';
        cout << "Стороны: " << "a = " << this->side_a << " b = " << this->side_b
            << " c = " << this->side_c << '\n';
        cout << "Углы: " << "A = " << this->angle_A << " B = " << this->angle_B
            << " C = " << this->angle_C << '\n';
        cout << endl;
    }
