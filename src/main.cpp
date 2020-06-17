#include <iostream>
#include "Foo.h"

int main()
{
    Foo foo_object;
    foo_object.register_callbacks();
    std::cout << call_cpp_get_function() << "\n";
    call_cpp_set_function(35);
    std::cout << call_cpp_get_function() << "\n";
    Foo foo_object2;
    foo_object2.register_callbacks();
    call_cpp_set_function(54);
    std::cout << call_cpp_get_function() << "\n";

    return 0;
}

