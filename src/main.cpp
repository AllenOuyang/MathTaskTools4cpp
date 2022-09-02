#include <iostream>
#include "utils/root_util.h"
#include <functional>
//#include <log4cplus/log4cplus.h>
#include "utils/allen_log.h"
#include "HomeWork/shower_factory.h"
int main() {
    //ouyangleiluo::AllenLog *logger = ouyangleiluo::AllenLog::GetInstance();
    //logger->info("hello world");
    ouyangleiluo::ShowerFactory *showerFactory = new ouyangleiluo::ShowerFactory();
    ouyangleiluo::HomeWorkShower *homeWorkShower = showerFactory->buildShower(1);
    homeWorkShower->run();
}
