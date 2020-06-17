#include "Foo.h"

//! Foo class constructor
Foo::Foo()
    :
    value_{0}
{}

//! Getter function
//! \return Value of class variable value_
int Foo::getValue() const
{
    return value_;
}

//! Setter function
//! \param value Value to be set
void Foo::setValue(int value)
{
    value_ = value;
}

int Foo::c_wrapper_getValue(void *arg1)
{
    Foo *foo_instance = static_cast<Foo *>(arg1);
    return foo_instance->getValue();
}

void Foo::c_wrapper_setValue(int value, void *arg1)
{
    Foo *foo_instance = static_cast<Foo *>(arg1);
    foo_instance->setValue(value);
}

void Foo::register_callbacks()
{
    register_handler(Foo::c_wrapper_getValue, Foo::c_wrapper_setValue, static_cast<void *>(this));
}
