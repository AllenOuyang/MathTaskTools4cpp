//
// Created by 欧阳磊落 on 2022/8/25.
//

#include "root_util.h"

function ouyangleiluo::root_util::GetTargetFunction(const function f, const function g) {
    function target = [&](double x){return f(x) - g(x);};
    return target;
}

double ouyangleiluo::root_util::root(const function f, const function g, const function f1,
                                     const function g1, double a, double b, const double eps) {
    function target = GetTargetFunction(f, g);
    function target1 = GetTargetFunction(f1, g1);
    do {
        try {
            if (target(a) < 0) {//Условие начальной точки для метода хорд
                a = a + (b - a) / (target(a) - target(b)) * target(a); //формулы расчета по методу хорд
                b = b - target(b) / target1(b);
            } else if (target(a) > 0) {//Условие начальной точки для метода касательных
                a = a - target(a) / target1(a); //формулы расчета по методу касательных
                b = b + (b - a) / (target(b) - target(a)) * target(b);
            } else {
                return a;
            }
        } catch (std::exception e) {
            break;
        }
    } while (fabs(b - a) > eps);//Построение хорд и касательных продолжается до достижения необходимой точности решения е
    return (a + b) / 2.0;
}
