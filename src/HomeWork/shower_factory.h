//
// Created by 欧阳磊落 on 2022/9/3.
//

#ifndef MATHTASKTOOLS_SHOWER_FACTORY_H
#define MATHTASKTOOLS_SHOWER_FACTORY_H
#include "home_work_shower.h"
#include "home_work_showers.h"
namespace ouyangleiluo {
    class ShowerFactory {
    public:
        ouyangleiluo::HomeWorkShower* buildShower(int homeworkId) {
            switch (homeworkId) {
                case 1 : return new ouyangleiluo::HomeWorkShower1();
                default: break;
            }
            return nullptr;
        }
    };
}


#endif //MATHTASKTOOLS_SHOWER_FACTORY_H
