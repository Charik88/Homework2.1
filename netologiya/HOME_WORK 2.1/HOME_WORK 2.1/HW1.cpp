//
//  HW1.cpp
//  HOME_WORK 2.1
//
//  Created by Anastasiya Charykova on 29.05.2024.
//

#include "HW1.hpp"
#include <iostream>
#include <string>

enum class months {
  january = 1,
  february = 2,
  march = 3,
  april = 4,
  may = 5,
  june = 6,
  july = 7,
  august = 8,
  september = 9,
  october = 10,
  november = 11,
  december = 12
};

const char *get_month_name(months month) {
  switch (month) {
  case months::january:
    return "Январь";
  case months::february:
    return "Февраль";
  case months::march:
    return "Март";
  case months::april:
    return "Апрель";
  case months::may:
    return "Май";
  case months::june:
    return "Июнь";
  case months::july:
    return "Июль";
  case months::august:
    return "Август";
  case months::september:
    return "Сентябрь";
  case months::october:
    return "Октябрь";
  case months::november:
    return "Ноябрь";
  case months::december:
    return "Декабрь";
  default:
    return "Неправильный номер!";
  }
}

int main(int argc, char **argv) {

  int month;
  do {
    std::cout << "Введите номер месяца: ";
    std::cin >> month;

    if (month == 0) {
      break;
    } else {
      std::cout << get_month_name(static_cast<months>(month)) << std::endl;
    }
  } while (month != 0);
  std::cout << "До свидания!";
  return 0;
}
