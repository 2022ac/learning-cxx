#include "MyVector.h"
#include <cstring>
#include <iostream>
#include <sstream>
struct Numbers {
    double *data;
    std::size_t size;
};


void input(std::string &op, MyVector<double> &vec) {
    std::cout << ">>> ";
    std::string line;
    std::getline(std::cin, line);

    std::stringstream ss{line};

    ss >> op;

    double number;
    for (std::size_t i = 0; ss >> number; i++) {
        vec.push_back(number);
        std::cout << __FILE__ << " " << __LINE__ << " " << vec.capacity() << std::endl;
    }
    std::cout << op << std::endl;
}

double sum(MyVector<double> &vec) {
    double res = 0;
    for (std::size_t i = 0; i < vec.size(); i++) {
        res += vec[i];
    }
    return res;
}

int main() {
    std::cout << "---------------" << std::endl;
    // 当设置为模板类的时候 改为T 类型 之后类初始化的时候就需要 <> 来指定参数了
    MyVector<double> vec;
    std::string op;
    input(op, vec);
    double sums = sum(vec);
    std::cout << "sum: " << sums << std::endl;
    return 0;
}