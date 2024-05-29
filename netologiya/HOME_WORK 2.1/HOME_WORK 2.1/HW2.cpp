//
//  HW2.cpp
//  HOME_WORK 2.1
//
//  Created by Anastasiya Charykova on 29.05.2024.
//

#include "HW2.hpp"
#include <iostream>
#include <string>



struct person{
int account_number;
std::string name;
double balanse;
double new_balanse;
};

void change_balanse(person &p, double new_balanse){
  p.balanse = new_balanse;
}
int main(int argc, char **argv){
  person p;
  std::cout << "Введите номер счета: ";
  std::cin >> p.account_number;
  std::cout << "Введите имя владельца: ";
  std::cin >> p.name;
  std::cout << "Введите баланс: ";
  std::cin >> p.balanse;
  std::cout << "Введите новый баланс: ";
  std::cin >> p.new_balanse;
  std::cout << "Ваш счет: " << p.account_number << ", " << p.name << ", " << p.new_balanse << std::endl;
  return 0;

}
