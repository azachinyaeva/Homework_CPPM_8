#include <iostream>
#include <locale.h>
#include "Exception.h"
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Rhombus.h"
#include "Square.h"

using namespace std;

void print_object(Figure* figure) {
    figure->get_info();
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Figure* ptr_figure;

    try
    {
        Triangle triangle("Треугольник", 10, 10, 10, 60, 90, 50);
        ptr_figure = &triangle;
        print_object(ptr_figure);

    }
    catch (const CreateFigureException& ex) {
        cout << ex.what() << endl;
    }

    try
    {
        RightTriangle triangle_r("Прямоугольный треугольник", 10, 10, 10, 60, 30);
        ptr_figure = &triangle_r;
        print_object(ptr_figure);

    }
    catch (const CreateFigureException& ex) {
        cout << ex.what() << '\n';
    }

    try
    {
        IsoscelesTriangle triangle_i("Равнобедренный треугольник", 10, 20, 60, 60);
        ptr_figure = &triangle_i;
        print_object(ptr_figure);
    }
    catch (const CreateFigureException& ex) {
        cout << ex.what() << '\n';
    }

    try
    {
        EquilateralTriangle triangle_e("Равносторонний треугольник", 10, 60);
        ptr_figure = &triangle_e;
        print_object(ptr_figure);
    }
    catch (const CreateFigureException& ex) {
        cout << ex.what() << '\n';
    }

    try
    {
        Quadrangle quad("Четырехугольник", 20, 30, 20, 30, 60, 50, 60, 50);
        ptr_figure = &quad;
        print_object(ptr_figure);
    }
    catch (const CreateFigureException& ex) {
        cout << ex.what() << '\n';
    }

    try
    { 
        Rectangle rect("Прямоугольник", 20, 30);
        ptr_figure = &rect;
        print_object(ptr_figure);
    }
    catch (const CreateFigureException& ex) {
        cout << ex.what() << '\n';
    }

    try
    { 
        Square square("Квадрат", 15);
        ptr_figure = &square;
        print_object(ptr_figure);
    }
    catch (const CreateFigureException& ex) {
        cout << ex.what() << '\n';
    }

    try
    {
        Parallelogram par("Параллелограмм", 20, 30, 100, 80);
        ptr_figure = &par;
        print_object(ptr_figure);
    }
    catch (const CreateFigureException& ex) {
        cout << ex.what() << '\n';
    }

    try 
    { 
        Rhombus rhombus("Ромб", 16, 100, 80);
        ptr_figure = &rhombus;
        print_object(ptr_figure);
    }
    catch (const CreateFigureException& ex) {
            cout << ex.what() << '\n';
    }

}


