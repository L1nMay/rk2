#include "lab07dz/lab07dz.hpp"
#include <iostream>

namespace lab07dz {
    int calculate(int a, int b) {
        return a * b; // Пример реализации
    }

    void show_result(const char* operation) {
        std::cout << "[lab07dz] Result of " << operation << ": ";
    }
}
