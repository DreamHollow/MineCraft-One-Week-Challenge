#ifndef DEBUGGER_H_INCLUDED
#define DEBUGGER_H_INCLUDED 1

#include <iostream>
#include "Globals.h"

/// @brief Debugger class, tracks object memory and other important data.
class Debugger
{
public:
    Debugger(const char* object_name);
    virtual ~Debugger();

private:
    std::string object_name;
};

#endif