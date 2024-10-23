//
// Created by Dell on 10/23/2024.
//

#ifndef NUMBER_H
#define NUMBER_H
#include <ostream>


class Number {
private:
    double d;
public:
    Number(double d = 0.0);
    ~Number();
    friend std::ostream& operator<<(std::ostream& os, const Number& number);
    operator double() ;
    operator int ();

};



#endif //NUMBER_H
