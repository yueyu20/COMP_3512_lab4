//
// Created by 虞跃 on 2018-10-11.
//

#include "Animal.hpp"

long Animal::count = 1;


Animal::Animal() {
    Id = count++;
    isAlive = true;
    age = 0;
    xCor = 0;
    yCor = 0;
}
Animal::Animal(double x, double y, int age) {
    age = age;
    isAlive = true;
    Id = count++;
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
    cout << "animal destructor" << endl;

}

void Animal::move(double x, double y) {
    xCor = x;
    yCor = y;
}

void Animal::move(double x, double y, double z) {
    xCor = x;
    yCor = y;
}

void Animal:: eat() {
    cout << "animal eats" << endl;
}

void Animal::sleep() {
    cout << "animal sleeps" << endl;

}

ostream& operator<< (ostream& os, const Animal& animal){

    os << "animal id" << animal.Id << endl;
    os << "animal age" << animal.age << endl;
    os << "is animal alive" << animal.isAlive << endl;
    os << "animal location" << animal.xCor << "," << animal.yCor << endl;

    return os;

}

inline void Animal::setId(long n) {
    Id = n;
}

inline long Animal::getId() const {
    return Id;
}

inline void Animal::setAge(int a) {
    age = a;
}

inline long Animal::getAge() const {
    return age;
}

inline void Animal::setAlive(bool b) {
    isAlive = b;
}

inline bool Animal::getAlive() const {
    return isAlive;
}


inline void Animal::setX(double x) {
    xCor = x;
}

inline void Animal::setY(double y) {
    yCor = y;
}

inline double Animal::getX() const {
    return xCor;
}

inline double Animal::getY() const{
    return yCor;
}


