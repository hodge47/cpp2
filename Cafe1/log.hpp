#ifndef LOG_H
#define LOG_H
#include <iostream>
#include <string>

class Log
{
private:
    
public:
    Log();
    void log(std::string _message, bool _newLine);
};

#endif