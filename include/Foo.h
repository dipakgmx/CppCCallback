#ifndef UNTITLED_FOO_H
#define UNTITLED_FOO_H
#include "Test.h"

#ifdef __cplusplus
class Foo
{
public:
    Foo();
    int getValue() const;
    void setValue(int value);
    void register_callbacks();

    static int c_wrapper_getValue(void *arg1);
    static void c_wrapper_setValue(int value, void *arg1);
private:
    int value_;
};
#endif



#endif //UNTITLED_FOO_H
