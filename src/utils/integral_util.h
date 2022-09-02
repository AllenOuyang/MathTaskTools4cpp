//
// Created by 欧阳磊落 on 2022/8/25.
//

#ifndef INC_4THSEMESTER_INTEGRAL_UTIL_H
#define INC_4THSEMESTER_INTEGRAL_UTIL_H
#include <functional>
#include <math.h>
using function = std::function<double(double)>;
namespace ouyangleiluo {
    class integral_util {
    private:
        integral_util();

    public:
        static double integral(const function f, const double a, const double b, const double eps);
    };
}


#endif //INC_4THSEMESTER_INTEGRAL_UTIL_H