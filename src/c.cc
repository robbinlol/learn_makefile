#include "c.h"

void c_print() {
    std::cout << "this is c print without args.\n";
}

template <class T>
void c_print_vec(std::vector<T>& vs) {
    for (auto& v: vs) {
        std::cout << v << std::endl;        
    }
}

void c_print_string(std::string& s) {
    std::cout << s << std::endl;
}