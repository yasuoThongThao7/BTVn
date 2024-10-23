//
// Created by Dell on 10/23/2024.
//

#ifndef DATE_H
#define DATE_H
#include <ostream>


class Date {
private:
    int year;
    int month;
    int day;
public:
    Date();
    ~Date();
    Date operator ++ ();
    Date operator -- ();
    Date operator += ();
    bool day31(int,int);
    bool day30(int,int);
    bool month2(int,int);
    bool namNhuan(int);
    friend std::ostream& operator<<(std::ostream& ,const Date&);
    friend std::istream& operator>>(std::istream&, Date&);
    void date();
};



#endif //DATE_H
