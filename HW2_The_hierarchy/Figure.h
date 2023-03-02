#pragma once
#include <iostream>
using namespace std;

class Figure {

public:
    Figure(string name_);
    
virtual void get_info();

private:
    string name;
};
