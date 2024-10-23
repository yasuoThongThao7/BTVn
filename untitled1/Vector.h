//
// Created by Dell on 10/16/2024.
//

#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

using namespace std;

class Vector {
    private:
        int *p;
        int size;
    public:
    Vector();
    Vector(const Vector&);
    Vector(int size);
    ~Vector();
    int getSize();
    void setSize(int size);
    int get(int i);
    void set(int i, int value);
    void display();
    friend ostream& operator<<(ostream& os, const Vector& v);
    friend istream& operator>>(istream& is, Vector& v);
    friend Vector operator+(const Vector& v1, const Vector& v2);
    friend Vector operator-(const Vector& v1, const Vector& v2);
    int& operator[](const int&);
};



#endif //VECTOR_H
