//
// Created by 欧阳磊落 on 2022/8/25.
//

#include "integral_util.h"

double ouyangleiluo::integral_util::integral(const function f, const double a, const double b, const double eps) {
    double width = b - a;
    double sumNew = width * (f(a) + f(b)) / 2;
    double sumOld = 0;
    for (int n = 1; fabs(sumNew - sumOld) >= eps; n *= 2) {
        sumOld = sumNew;
        sumNew = 0;
        for (int i = 0; i  < n; ++i) {
            sumNew += f(a + width * (i + 0.5) / n);
        }
        sumNew *= width / n;
    }
    return sumNew;
}