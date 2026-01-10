#include "MyVector.h"
#include <cstring>
#include <iostream>
#include <sstream>
struct Numbers {
    double *data;
    std::size_t size;
};


void input(std::string &op, MyVector &vec) {
    std::cout << ">>> ";
    std::string line;
    std::getline(std::cin, line);

    std::stringstream ss{line};

    ss >> op;

    double number;
    for (std::size_t i = 0; i < vec.capacity() && ss >> number; i++) {
        vec.push_back(number);
    }
    std::cout << op << std::endl;
}

double sum(MyVector &vec) {
    double res = 0;
    for (std::size_t i = 0; i < vec.size(); i++) {
        res += vec[i];
    }
    return res;
}

int main() {
    std::cout << "---------------" << std::endl;
    MyVector vec;
    std::string op;
    input(op, vec);
    double sums = sum(vec);
    std::cout << "sum: " << sums << std::endl;
    return 0;
}