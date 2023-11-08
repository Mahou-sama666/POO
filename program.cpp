#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "math_functions.h"
#include "checker.h"
#include "equation.h"
#include "calculator.h"
#include <cstring>




int main()
{
    double x[4] = { 0,5,30,50};
    double y[4] = { 1, 2, 10, 9};
    Equation e(2,'x',y);
    solutii a;
    //Equation e1;
    //std::cin >> e1;
    a= e.s_degree();
    std::cout << a.x1 << " " << a.x2;
    //std::cout << e1 << '\n';
	//std::cout << e.f_degree() << std::endl;
    return 0;
}