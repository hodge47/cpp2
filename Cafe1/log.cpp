#include "log.hpp"

Log::Log()
{
    
}

void Log::log(std::string _message, bool _newLine)
{
    if(!_newLine)
    {
        std::cout << _message;
    }
    else
    {
        std::cout << _message << std::endl;
    }
    
}