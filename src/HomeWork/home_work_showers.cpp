//
// Created by 欧阳磊落 on 2022/9/3.
//

#include "home_work_showers.h"
#include "../Global.h"

void ouyangleiluo::HomeWorkShower1::run() {
    function f = [](double x){return 1 + 4/ (pow(x,2) + 1);}; // f(x) = 1 + 4 / (x^2 + 1)
    function g = [](double x){return pow(x, 3);}; // g(x) = x^3
    function h = [](double x){return pow(2, -x);}; // h(x) = 2^(-x)

    function f1 = [](double x){return -8 * x / pow(pow(x, 2) + 1, 2);}; // f`(x) = -8x / (x^2 + 1)^2
    function g1 = [](double x){return 3 * pow(x, 2);}; // g`(x) = 3x^2
    function h1 = [](double x){return log(2) * pow(2, -x);}; // h`(x) = -2^(-x)ln2
    std::cout << ouyangleiluo::root_util::root(f, g, f1, g1, 1, 2, 0.0001) << std::endl;
    double intersection_fg =  ouyangleiluo::root_util::root(f, g, f1, g1, 1, 2, 0.0001);
    double intersection_fh =  ouyangleiluo::root_util::root(f, h, f1, h1, -2, -1, 0.0001);
    double intersection_gh =  ouyangleiluo::root_util::root(g, h, g1, h1, -1, 1, 0.0001);
    double integral_f = ouyangleiluo::integral_util::integral(f,  std::min(intersection_fg, intersection_fh),
                                                std::max(intersection_fg, intersection_fh), 0.0001);
    double integral_g = ouyangleiluo::integral_util::integral(g,  std::min(intersection_fg, intersection_gh),
                                                std::max(intersection_fg, intersection_gh), 0.0001);
    double integral_h = ouyangleiluo::integral_util::integral(h,  std::min(intersection_fh, intersection_gh),
                                                std::max(intersection_fh, intersection_gh), 0.0001);
    double area = integral_f - integral_g - integral_h;

    std::cout << ouyangleiluo::ANSI_BLUE << "The intersection of " << ouyangleiluo::ANSI_RESET <<
                 ouyangleiluo::ANSI_YELLOW << "f(x)" << ouyangleiluo::ANSI_RESET <<
                 ouyangleiluo::ANSI_BLUE << " and " << ouyangleiluo::ANSI_RESET <<
                 ouyangleiluo::ANSI_YELLOW << "g(x)" << ouyangleiluo::ANSI_RESET <<
                 ouyangleiluo::ANSI_BLUE << " is " << ouyangleiluo::ANSI_RESET;
    std::cout << ouyangleiluo::ANSI_YELLOW << intersection_fg << ouyangleiluo::ANSI_RESET << std::endl;

    std::cout << ouyangleiluo::ANSI_BLUE << "The intersection of " << ouyangleiluo::ANSI_RESET <<
                 ouyangleiluo::ANSI_YELLOW << "f(x)" << ouyangleiluo::ANSI_RESET <<
                 ouyangleiluo::ANSI_BLUE << " and " << ouyangleiluo::ANSI_RESET <<
                 ouyangleiluo::ANSI_YELLOW << "h(x)" << ouyangleiluo::ANSI_RESET <<
                 ouyangleiluo::ANSI_BLUE << " is " << ouyangleiluo::ANSI_RESET;
    std::cout << ouyangleiluo::ANSI_YELLOW << intersection_fh << ouyangleiluo::ANSI_RESET << std::endl;

    std::cout << ouyangleiluo::ANSI_BLUE << "The intersection of " << ouyangleiluo::ANSI_RESET <<
                 ouyangleiluo::ANSI_YELLOW << "g(x)" << ouyangleiluo::ANSI_RESET <<
                 ouyangleiluo::ANSI_BLUE << " and " << ouyangleiluo::ANSI_RESET <<
                 ouyangleiluo::ANSI_YELLOW << "h(x)" << ouyangleiluo::ANSI_RESET <<
                 ouyangleiluo::ANSI_BLUE << " is " << ouyangleiluo::ANSI_RESET;
    std::cout << ouyangleiluo::ANSI_YELLOW << intersection_gh << ouyangleiluo::ANSI_RESET << std::endl;

    std::cout << ouyangleiluo::ANSI_BLUE << "The integral of " << ouyangleiluo::ANSI_RESET <<
                 ouyangleiluo::ANSI_YELLOW << "f(x)" << ouyangleiluo::ANSI_RESET <<
                 ouyangleiluo::ANSI_BLUE << " is " << ouyangleiluo::ANSI_RESET;
    std::cout << ouyangleiluo::ANSI_YELLOW << integral_f << ouyangleiluo::ANSI_RESET << std::endl;

    std::cout << ouyangleiluo::ANSI_BLUE << "The integral of " << ouyangleiluo::ANSI_RESET <<
                 ouyangleiluo::ANSI_YELLOW << "g(x)" << ouyangleiluo::ANSI_RESET <<
                 ouyangleiluo::ANSI_BLUE << " is " << ouyangleiluo::ANSI_RESET;
    std::cout << ouyangleiluo::ANSI_YELLOW << integral_g << ouyangleiluo::ANSI_RESET << std::endl;

    std::cout << ouyangleiluo::ANSI_BLUE << "The integral of " << ouyangleiluo::ANSI_RESET <<
                 ouyangleiluo::ANSI_YELLOW << "h(x)" << ouyangleiluo::ANSI_RESET <<
                 ouyangleiluo::ANSI_BLUE << " is " << ouyangleiluo::ANSI_RESET;
    std::cout << ouyangleiluo::ANSI_YELLOW << integral_h << ouyangleiluo::ANSI_RESET << std::endl;

    std::cout << ouyangleiluo::ANSI_BLUE << "The area surrounded by functions " << ouyangleiluo::ANSI_RESET <<
                 ouyangleiluo::ANSI_YELLOW << "f(x), g(x), h(x)" << ouyangleiluo::ANSI_RESET <<
                 ouyangleiluo::ANSI_BLUE << " is " << ouyangleiluo::ANSI_RESET;
    std::cout << ouyangleiluo::ANSI_YELLOW << area << ouyangleiluo::ANSI_RESET << std::endl;

}
