#include <iostream>
#include "Foo.h"
extern "C"
{
    #include "Test.h"
}

int main()
{
    Foo foo_object;
    register_handler(&c_wrapper_getValue, &c_wrapper_setValue, static_cast<void *>(&foo_object));
    std::cout << call_cpp_get_function() << "\n";
    call_cpp_set_function(35);
    std::cout << call_cpp_get_function() << "\n";
    return 0;
}

