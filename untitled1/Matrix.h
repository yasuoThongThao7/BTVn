//
// Created by Dell on 10/16/2024.
//

#ifndef MATRIX_H
#define MATRIX_H
#include <ostream>


class Matrix {
private:
    int **p;
    int rows,cols;
public:
    Matrix(int = 0, int = 0);
    Matrix(const Matrix &);
    int getRows();
    int getCols();
    friend std::ostream &operator<<(std::ostream &, const Matrix &);
    friend std::istream &operator>>(std::istream &, Matrix &);
    int& operator() (const int&,const int&);
    ~Matrix();
};



#endif //MATRIX_H
