//
// Created by 虞跃 on 2018-10-11.
//

#include "Bird.hpp"


Bird::Bird(): Animal() {
    height = 0;
    cout << "bird default constructor" << endl;
}

Bird::Bird(int age, double x, double y, double z): Animal(age, x, y) {
    height = z;
    cout << "bird 4 para constructor" << endl;
}

void Bird::move(double x, double y, double z) {
    Animal::move(x, y);
    height = z;
}

Bird::Bird(const Bird &bird) {
    setId(bird.getId());
    setAlive(bird.getAlive());
    setAge(bird.getAge());
    setX(bird.getX());
    setY(bird.getY());
    height = bird.height;
    cout << "bird copy constructor" << endl;
}

Bird::~Bird() {
    cout<< "bird destructor" << endl;
}

void Bird::sleep() {
    cout << "bird sleep" << endl;
}

void Bird::eat() {
    cout << "bird eat" << endl;
}

ostream& operator<<(ostream &os, const Bird &bird) {
    os << "bird id" << bird.getId() << endl;
    os << "bird age" << bird.getAge() << endl;
    os << "is bird alive" << bird.getAlive() << endl;
    os << "bird location" << bird.getX() << "," << bird.getY() << "," << bird.height << endl;

    return os;
}