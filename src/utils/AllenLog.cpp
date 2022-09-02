//
// Created by 欧阳磊落 on 2022/8/29.
//

//#include "AllenLog.h"
//
//void ouyangleiluo::AllenLog::DestoryInstance() {
//    logger.shutdown();
//    delete instance;
//    instance = nullptr;
//}
//
//ouyangleiluo::AllenLog *ouyangleiluo::AllenLog::GetInstance() {
//    return instance;
//}
//
//ouyangleiluo::AllenLog::AllenLog() {
//    log4cplus::Initializer initializer;
//    log4cplus::SharedAppenderPtr appender(new log4cplus::ConsoleAppender());
//    appender->setName(LOG4CPLUS_TEXT("console"));
//    appender->setLayout(std::unique_ptr<log4cplus::Layout>(new log4cplus::SimpleLayout));
//    logger = log4cplus::Logger::getInstance(LOG4CPLUS_TEXT("ouyangleiluo"));
//    logger.setLogLevel(log4cplus::INFO_LOG_LEVEL);
//    logger.addAppender(appender);
//}
//
//void ouyangleiluo::AllenLog::debug(std::string msg) {
//    LOG4CPLUS_DEBUG(logger, LOG4CPLUS_TEXT("" << msg.c_str()));
//}
//
//void ouyangleiluo::AllenLog::info(std::string msg) {
//    LOG4CPLUS_INFO(logger, LOG4CPLUS_TEXT("" << msg.c_str()));
//}
//
//void ouyangleiluo::AllenLog::warn(std::string msg) {
//    LOG4CPLUS_WARN(logger, LOG4CPLUS_TEXT("" << msg.c_str()));
//}
//
//void ouyangleiluo::AllenLog::error(std::string msg) {
//    LOG4CPLUS_ERROR(logger, LOG4CPLUS_TEXT("" << msg.c_str()));
//}
//
//void ouyangleiluo::AllenLog::fatal(std::string msg) {
//    LOG4CPLUS_FATAL(logger, LOG4CPLUS_TEXT(""<< msg.c_str()));
//}
