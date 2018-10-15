//
// Created by 虞跃 on 2018-10-12.
//

#ifndef COMP_3512_LAB4_CANINE_HPP
#define COMP_3512_LAB4_CANINE_HPP


#include "Animal.hpp"

class Canine : public Animal {

public:
    Canine();

    Canine(int age, double x, double y);

    Canine(const Canine &canine);

    ~Canine() override;

    void sleep() override;

    void eat() override;

    void hunt();

    void move(double x, double y) override;

    friend ostream& operator<<(ostream &os, const Canine &c);
};


#endif //COMP_3512_LAB4_CANINE_HPP
