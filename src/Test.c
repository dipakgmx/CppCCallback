#include "Test.h"
#include <stdio.h>

static get_handler_t get_handler_ = NULL;   /**< Getter function pointer of type int (*g)(void *). */
static set_handler_t set_handler_ = NULL;   /**< Setter function pointer of type void (*s)(int,  void *). */
static void* foo_object_instance  = NULL;    /**< Instance of Foo object. */

//! Registers the getter and setter function with the object of Class Foo
//! \param g Getter function pointer of type int (*g)(void *).
//! \param s Setter function pointer of type void (*s)(int,  void *).
//! \param p_instance Instance of Foo object.
void register_handler(
    int (*g)(void *),
    void (*s)(int,  void *),
    void* p_instance)
{
    get_handler_ = g;
    set_handler_ = s;
    foo_object_instance = p_instance;
}

//! Function calls the get function of class Foo
//! \return Value of value_ from class Foo
int call_cpp_get_function()
{
    return get_handler_(foo_object_instance);
}

//! Function calls the set function of class Foo
//! \param value Value to be set in class Foo
void call_cpp_set_function(int value)
{
    set_handler_(value, foo_object_instance);
}
