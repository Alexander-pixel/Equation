#include "Square Equation.hpp"

Square_Equation::Square_Equation(int a, int b, int c)
{
    Square_Equation::a = a;
    Square_Equation::b = b;
    Square_Equation::c = c;
}

int Square_Equation::getResult1()const
{
    if(result1)
        return result1;
    else
        return 0;
}

int Square_Equation::getResult2()const
{
    if(result2)
        return result2;
    else
        return 0;
}


void Square_Equation::Count()
{
    if(a==0)
    {
        cout<<"No result."<<endl;
        return;
    }
        
    
    int des = pow(b, 2) - 4*a*c;
    
    if(des > 0)
    {
        result1 = (-b + sqrt(des)) / (2*a);
        result2 = (-b - sqrt(des)) / (2*a);
        
        cout<< "Result_1: "<<result1<<endl;
        cout<<"Result_2: "<<result2<<endl;
    }
    else if(des == 0)
    {
        result1 = -b / (2*a);
        cout<<"Result: "<<result1<<endl;
    }
    else
    {
        cout<<"No result."<<endl;
    }
}
