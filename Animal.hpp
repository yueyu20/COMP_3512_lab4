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
    double xCor;
    double yCor;
    long Id;



public:

    static long count;


    Animal();

    Animal(double x, double y, int age);

    Animal(const Animal &animal);

    virtual ~Animal();

    virtual void move(double x, double y);

    virtual void move(double x, double y, double z);

    virtual void sleep();

    virtual void eat();

    friend ostream& operator<< (ostream& os, const Animal& animal);


    void setId(long n);

    long getId() const;

    void setAge(int n);

    long getAge() const;

    void setAlive(bool t);

    bool getAlive() const;

    void setX(double x);

    void setY(double y);

    double getX() const;

    double getY() const;

};


#endif //COMP_3512_LAB4_ANIMAL_HPP
