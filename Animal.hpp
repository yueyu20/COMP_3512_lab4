//
// Created by 虞跃 on 2018-10-11.
//

#include <iostream>

using namespace std;

#ifndef COMP_3512_LAB4_ANIMAL_HPP
#define COMP_3512_LAB4_ANIMAL_HPP


class Animal {
private:
    int age;
    bool isAlive;
    static long Id;
    int xCor;
    int yCor;

public:
    Animal();

    Animal(double x, double y, int age);

    Animal(const Animal &animal);

    virtual ~Animal();

    virtual void moves(double x, double y);

    virtual void sleep();

    virtual void eat();

    friend ostream& operator<< (ostream& os, const Animal& animal);

};


#endif //COMP_3512_LAB4_ANIMAL_HPP
