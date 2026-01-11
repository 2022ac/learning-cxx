#include <iostream>
#ifndef MYVECTOR_H
#define MYVECTOR_H


// c++ 模板
template<typename T>
class MyVector {
private:
    T *data_;
    std::size_t size_;
    std::size_t capacity_;
    void reallocate() {
        const std::size_t new_capacity_ = capacity_ * 2;
        T *new_data_ = new T[new_capacity_];
        for (std::size_t i = 0; i < size_; i++) {
            new_data_[i] = data_[i];
        }
        delete[] data_;

        data_ = new_data_;
        capacity_ = new_capacity_;
    }

public:
    MyVector() : size_(0), capacity_(2) {
        data_ = new T[capacity_];
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
    void push_back(T elem) {
        if (size_ == capacity_) {
            // TODO: 实现扩容机制
            reallocate();
        }
        data_[size_] = elem;
        ++size_;
    }
    void pop_back() {
        --size_;
    }
    // 访问元素方法
    T operator[](std::size_t idx) const {
        return data_[idx];
    }
};

// class MyVector {
// private:
//     double *data_;
//     std::size_t size_;
//     std::size_t capacity_;

// public:
//     MyVector() : size_(0), capacity_(16) {
//         data_ = new double[capacity_];
//     }

//     ~MyVector() {
//         delete[] data_;
//     }

//     std::size_t size() const {
//         return size_;
//     }

//     std::size_t capacity() const {
//         return capacity_;
//     }
//     void push_back(double elem) {
//         data_[size_] = elem;
//         ++size_;
//     }
//     void pop_back() {
//         --size_;
//     }
//     // 访问元素方法
//     double operator[](std::size_t idx) const {
//         return data_[idx];
//     }
// };

#endif// MYVECTOR_H