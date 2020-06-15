#ifndef UNTITLED_FOO_H
#define UNTITLED_FOO_H

#ifdef __cplusplus
class Foo
{
public:
    Foo();
    int getValue() const;
    void setValue(int value);
    void increment(const int& val);
    void decrement(const int& val);

private:
    int value_;
};
#endif

int c_wrapper_getValue(void *arg1);
void c_wrapper_setValue(int value, void *arg1);

#endif //UNTITLED_FOO_H
