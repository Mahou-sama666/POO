#include <iostream>
#include "math_functions.h"
#include "checker.h"
#include "equation.h"
#include "calculator.h"
#include <cstring>




int main()
{
    Equation e(2,'x', 6, 12, 30, 56);
    solutii a;
    //Equation e1;
    //std::cin >> e1;
    a= e.s_degree();
    std::cout << a.x1 << " " << a.x2;
    //<< '\n' << e1;
    return 0;
}