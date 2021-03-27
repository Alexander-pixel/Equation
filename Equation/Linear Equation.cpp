#include "Linear Equation.hpp"

Linear_Equation::Linear_Equation(int a, int b)
{
    Linear_Equation::a = a;
    Linear_Equation::b = b;
}

int Linear_Equation::getResult()const
{
    return result;
}

void Linear_Equation::Count()
{
    result = -b / a;
    cout<<"Result: "<<result<<endl;
}

