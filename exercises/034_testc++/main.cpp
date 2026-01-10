#include "../exercise_test.h"
#include <iostream>
int main() {

    std::cerr << __LINE__ << std::endl;
    std::cerr << __FILE__ << std::endl;
    std::cerr << x << " " << y << std::endl;
    Point p1(1, 2);
    std::cerr << p1.getX() << " " << p1.getY() << std::endl;
    std::cerr << p1 << std::endl;
    // 有下面这个重载了 如何使用
    // Point operator/(int n) const {
    //     return Point(x / n, y / n);
    // }
    std::cerr << p1 / 2 << std::endl;

    return 0;
}