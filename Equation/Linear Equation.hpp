#pragma once

#include "Equation.hpp"

class Linear_Equation:public Equation
{
    int result=0;
    int a=0;
    int b=0;
public:
    Linear_Equation(int a, int b);
    int getResult()const;
    void Count();
};
