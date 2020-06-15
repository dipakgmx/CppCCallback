#include "Foo.h"

void c_wrapper_setValue(int value, void *arg1)
{
    Foo* foo_instance = static_cast<Foo*>(arg1);
    foo_instance->setValue(value);
}

int c_wrapper_getValue(void *arg1)
{
    Foo* foo_instance = static_cast<Foo*>(arg1);
    return foo_instance->getValue();
}

Foo::Foo() :
    value_{0}
{}

void Foo::increment(const int &val)
{
    value_ += val;
}

void Foo::decrement(const int &val)
{
    value_ -= val;
}

int Foo::getValue() const
{
    return value_;
}
void Foo::setValue(int value)
{
    value_ = value;
}
