#include "Test.h"

void register_handler(
    int (*g)(void *),
    void (*s)(int,  void *),
    void* p_instance)
{
    get_handler_ = g;
    set_handler_ = s;
    foo_object_instance = p_instance;
}

int call_cpp_get_function()
{
    return get_handler_(foo_object_instance);
}
void call_cpp_set_function(int value)
{
    set_handler_(value, foo_object_instance);
}
