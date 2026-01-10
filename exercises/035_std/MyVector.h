#include <iostream>
#ifndef MYVECTOR_H
#define MYVECTOR_H


class MyVector {
private:
    double *data_;
    std::size_t size_;
    std::size_t capacity_;

public:
    MyVector() {
        data_ = new double[capacity_];
        size_ = 0;
        capacity_ = 16;
    }
    ~MyVector() {
        delete[] data_;
    }
    std::size_t size() const {
        return size_;
    }
    std::size_t capacity() const {
        return capacity_;
    }
    void push_back(double elem) {
        data_[size_] = elem;
        ++size_;
    }
    void pop_back() {
        --size_;
    }
    // 访问元素方法
    double operator[](std::size_t idx) const {
        return data_[idx];
    }
};

#endif// MYVECTOR_H