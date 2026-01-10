#ifndef __EXERCISE_TEST_H__
#define __EXERCISE_TEST_H__

#include <iostream>

int x = 12;
int y = 15;

struct Point {
private:
    int x;
    int y;

public:
    Point(int x, int y) : x(x), y(y) {}
    Point() : x(0), y(0) {}
    Point operator+(const Point &p) const {
        return Point(x + p.x, y + p.y);
    }
    Point operator-(const Point &p) const {
        return Point(x - p.x, y - p.y);
    }
    Point operator*(int n) const {
        return Point(x * n, y * n);
    }

    Point operator/(int n) const {
        return Point(x / n, y / n);
    }
    // 如何在外部标准输出 Point 对象
    friend std::ostream &operator<<(std::ostream &out, const Point &p) {
        out << "(" << p.x << ", " << p.y << ")";
        return out;
    }

    int getX() const {
        return x;
    }
    int getY() const {
        return y;
    }
};

void test_exercise_1();

void test_exercise_2();


#endif// __EXERCISE_TEST_H__