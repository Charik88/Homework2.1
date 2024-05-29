//
//  HW3.cpp
//  HOME_WORK 2.1
//
//  Created by Anastasiya Charykova on 29.05.2024.
//

#include "HW3.hpp"
#include <iostream>
#include <string>



struct city{
std::string city_name;
std::string street_name;
int house_number;
int apartment_number;
int index;
};
void print_city(city &c){
  std::cout << "Город: " << c.city_name << std::endl;
  std::cout << "Улица: " << c.street_name << std::endl;
  std::cout << "Номер дома: " << c.house_number << std::endl;
  std::cout << "Номер квартиры: " << c.apartment_number << std::endl;
  std::cout << "Индекс: " << c.index << std::endl;

}
int main(int argc, char **argv){
  city c;
  c.city_name = "Москва";
  c.street_name = "Каштановая";
  c.house_number = 3;
  c.apartment_number = 5;
  c.index = 142290;
  print_city(c);
  std::cout << std::endl;

  city a;
  a.city_name = "Санкт-Петербург";
  a.street_name = "Грибоедова";
  a.house_number = 5;
  a.apartment_number = 5;
  a.index = 987345;
  print_city(a);
  return 0;

}
