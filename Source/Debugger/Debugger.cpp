#include "Debugger/Debugger.h"

Debugger::Debugger(const char* object_name)
{
    this->object_name = object_name;
}

Debugger::~Debugger()
{
    object_name.clear();
    object_name.shrink_to_fit();
}