//
// Created by Dell on 10/23/2024.
//

#include "Date.h"

#include <iostream>

Date::Date() : year(1), month(1), day(1){
}

bool Date::day31(int day,int month) {
       return day > 31 && (month == 1 ||month == 3||month == 5||month == 7||month == 8||month == 10||month == 12);
}
bool Date::day30(int day,int month) {
        return day > 30 && (month == 4||month == 6||month == 9||month == 11||month == 12);
}
bool Date::namNhuan(int year) {
        return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

void Date::date() {
  while(true) {
          if(day31(day,month)) {
                  day -= 31;
                  month++;
          }else if(day30(day,month)) {
                  day -=30;
                  month++;
          }else if(namNhuan(this->year) && month == 2 )
          {
                  day -=29;
                  month++;
          }
          else if(!namNhuan(this->year) && month == 2) {
                  day -=28;
          }
          else{
                  day++;
                  break;
          }
          if(month > 12) {
                  month = 1;
                  year++;
          }
  }
}

Date Date::operator++() {
        ++day;
        date();
}
Date Date::operator+=() {
        day+=
}
 std::ostream& operator<<(std::ostream& os, const Date& date) {
        os << date.day << "/" << date.month << "/" << date.year;
        return os;
}
Date Date::operator--() {
     --day;
     date();
}

std::istream& operator>>(std::istream& is, Date& date) {
        std::cout << "day" << std::endl;
        is >> date.day;
        std::cout << "month" << std::endl;
        is >> date.month;
        std::cout << "year" << std::endl;
        is >> date.year;
        return is;
}