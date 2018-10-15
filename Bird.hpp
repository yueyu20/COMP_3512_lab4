//
// Created by 虞跃 on 2018-10-11.
//

#ifndef COMP_3512_LAB4_BIRD_HPP
#define COMP_3512_LAB4_BIRD_HPP


#include "Animal.hpp"
#include <iostream>


class Bird : public Animal{
private:
    // bird height
    double height;

public:
    Bird();

    Bird(int age, double x, double y, double z);

    Bird(const Bird &b); // copy constructor

    ~Bird() override;

    void move(double x, double y, double z) override;

    void sleep() override;

    void eat() override;


    friend ostream& operator<<(ostream &os, const Bird &bird);
};


#endif //COMP_3512_LAB4_BIRD_HPP
