//
// Created by Dell on 10/16/2024.
//

#include "Vector.h"

Vector::Vector(int size) : size(size)  {
    if (size == 0) {
        this->p = NULL;
    }
    else {
        this->p = new int[size];
        cin >> (*this);
    }
}
Vector::Vector(const Vector &v) {
    this->p = NULL;
    this->size = v.size;
    this->p = new int[size];
    cin >> (*this);
}
Vector::~Vector() {
    delete[] this->p;
}
istream &operator>>(istream &is, Vector &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << "p[" << i << "]" << endl;
        is >> *(v.p + i);
    }
    return is;
}

ostream &operator<<(ostream &os, const Vector &v) {
    for (int i = 0; i < v.size(); i++) {
        os << *(v.p + i);
    }
    return os;
}
int& Vector::operator[](const int& index) {
    static int cnt = 0 ;
    if (index >= 0 && index < this->size) {
        return this->p[index];
    }
    return cnt;
}
