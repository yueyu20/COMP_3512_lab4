//
// Created by 虞跃 on 2018-10-12.
//

#include "canine.hpp"


Canine::Canine() : Animal(){
    cout << "canine default constructor" << endl;
}

Canine:: Canine(int age, double x, double y) : Animal(age, x, y){
    cout << "canine 3 para constructor " << endl;
}

Canine::Canine(const Canine &canine) {
    setId(canine.getId());
    setAlive(canine.getAlive());
    setAge(canine.getAge());
    setX(canine.getX());
    setY(canine.getY());
    cout << "canine copy constructor" << endl;
}

Canine::~Canine() {
    cout << "canine destructor" << endl;
}

void Canine::sleep() {
    cout << "canine sleep" << endl;
}

void Canine::eat() {
    cout << "canine eats" << endl;

}

void Canine::hunt() {
    cout << "canine hunts" << endl;
}

void Canine::move(double x, double y) {
    Animal::move(x,y);
}

ostream& operator<<(ostream &os, const Canine &c) {
    os << "canine id" << c.getId() << endl;
    os << "canine age" << c.getAge() << endl;
    os << "is canine alive" << c.getAlive() << endl;
    os << "canine location" << c.getX() << "," << c.getY() << endl;

    return os;
}
