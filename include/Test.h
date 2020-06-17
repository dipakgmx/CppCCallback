//
// Created by dipak on 14/04/2020.
//

#ifndef UNTITLED_TEST_H
#define UNTITLED_TEST_H

#ifdef __cplusplus
extern "C" {
#endif

typedef int  (*get_handler_t)(void* arg1);
typedef void (*set_handler_t)(int foo, void* arg1);

void register_handler(get_handler_t g, set_handler_t s, void* p_instance);
int call_cpp_get_function();
void call_cpp_set_function(int value);
#ifdef __cplusplus
}
#endif

#endif //UNTITLED_TEST_H
