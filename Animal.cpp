//
// Created by 虞跃 on 2018-10-11.
//

#include "Animal.hpp"

Animal::Animal() {
    Id++;
    isAlive = true;
    age = 0;
    xCor = 0;
    yCor = 0;
}
Animal::Animal(double x, double y, int age) {
    age = age;
    isAlive = true;
    Id++;
    xCor = x;
    yCor = y;
}

Animal::Animal(const Animal &animal) {
    Id = animal.Id;
    isAlive = animal.isAlive;
    age = animal.age;
    xCor = animal.xCor;
    yCor = animal.yCor;
}

Animal::~Animal() {

}

void Animal::moves(double x, double y) {
    xCor = x;
    yCor = y;
}

void Animal:: eat() {

}

void Animal::sleep() {

}

ostream& operator<< (ostream& os, const Animal& animal){

}
