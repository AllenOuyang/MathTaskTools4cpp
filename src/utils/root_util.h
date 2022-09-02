//
// Created by 欧阳磊落 on 2022/8/25.
//

#ifndef INC_4THSEMESTER_ROOT_UTIL_H
#define INC_4THSEMESTER_ROOT_UTIL_H
#include <exception>
#include <iostream>
#include <functional>
#include <math.h>
//using function = double(*)(double);
using function = std::function<double(double)>;

namespace ouyangleiluo {
    class root_util {
    private:
        root_util();
    public:
        static function GetTargetFunction(const function f, const function g);

        static double root(const function f, const function g, const function f1,
                           const function g1, double a, double b, const double eps);

    };
}


#endif //INC_4THSEMESTER_ROOT_UTIL_H
