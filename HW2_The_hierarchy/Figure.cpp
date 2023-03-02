#include "Figure.h"
#include <iostream>
using namespace std;

    Figure::Figure(string name_) {
        name = name_;
    }
    
    void Figure::get_info() {
        cout << name;
    }

