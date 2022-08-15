#ifndef C_H
#define C_H
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

void c_print();
template <class T>
void c_print_vec(std::vector<T>&);

void c_print_string(std::string& s);


#endif