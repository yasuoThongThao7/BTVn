//
// Created by Dell on 10/23/2024.
//

#include "Number.h"


Number::Number(double d) : d(d){ }

Number::~Number() {

}

std::ostream &operator<<(std::ostream &os, const Number &number) {
     os << number.d;
     return os;
}
Number::operator double() {

     return this->d;
}
Number::operator int() {
     return (int) d;
}
