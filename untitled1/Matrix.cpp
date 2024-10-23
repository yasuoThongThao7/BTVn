//
// Created by Dell on 10/16/2024.
//

#include "Matrix.h"

#include <iostream>

Matrix::Matrix(int rows, int cols) : rows(rows), cols(cols)     {
    if(this->rows == 0 || this->cols == 0) {
        this->p = NULL;
    }
    else {
        this->p = new int*[rows];
        for(int i = 0; i < rows; i++) {
            this->p[i] = new int[cols];
        }
    }
}
Matrix::Matrix(const Matrix& matrix) {
    this->p = NULL;
    this->p = new int*[matrix.rows];
    for(int i = 0; i < matrix.rows; i++) {
        this->p[i] = new int[matrix.cols];
    }
}
Matrix::~Matrix() {
    for(int i = 0; i < rows; i++) {
        delete[] p[i];
    }
    delete[] p;
}
int Matrix::getCols() {
   return this->cols;
}

int Matrix::getRows() {
    return this->rows;
}

int& Matrix::operator()(const int& row, const int& col) {
    static int CNT = 0 ;
    if( row <= this->rows && row >= 0 || col <= this->cols && col >= 0) {
        return p[row][col];
    }
    return CNT;
}
std::ostream& operator<<(std::ostream& os, const Matrix& m) {
    for(int i = 0 ; m.rows > i; i++) {
        for(int j = 0; j < m.cols; j++) {
            os << m.p[i][j] << " ";
        }
        os << std::endl;
    }
}
std::istream& operator>>(std::istream& is, Matrix& m) {
    for(int i = 0; i < m.rows; i++) {
        for(int j = 0; j < m.cols; j++) {
            std::cout << "p[" <<i <<"]["<< j <<"] = ";
            is >> m.p[i][j];
        }
    }
    return is;
}
