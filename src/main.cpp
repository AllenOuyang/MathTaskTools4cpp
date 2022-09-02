#include <iostream>
#include "utils/root_util.h"
#include <functional>
//#include <log4cplus/log4cplus.h>
#include "utils/AllenLog.h"

int main() {
    //ouyangleiluo::AllenLog *logger = ouyangleiluo::AllenLog::GetInstance();
    //logger->info("hello world");
    function f = [](double x){return 1 + 4/ (pow(x,2) + 1);}; // f(x) = 1 + 4 / (x^2 + 1)
    function g = [](double x){return pow(x, 3);}; // g(x) = x^3
    function h = [](double x){return pow(2, -x);}; // h(x) = 2^(-x)

    function f1 = [](double x){return -8 * x / pow(pow(x, 2) + 1, 2);}; // f`(x) = -8x / (x^2 + 1)^2
    function g1 = [](double x){return 3 * pow(x, 2);}; // g`(x) = 3x^2
    function h1 = [](double x){return 0.5;};
    std::cout << ouyangleiluo::root_util::root(f, g, f1, g1, 1, 2, 0.0001) << std::endl;
}
