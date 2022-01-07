#pragma once

#include "Equation.hpp"

class Square_Equation
{
    int a = 0;
    int b = 0;
    int c = 0;
    
    double result1;
    double result2;
public:
    Square_Equation(int a, int b, int c);
    void Count();
    int getResult1() const;
    int getResult2() const;
};
