#include <iostream>

#include "Animal.cpp"
#include "Bird.cpp"
#include "canine.cpp"

int main() {

    Animal *a, *b, *c;
    a = new Animal();
    b = new Bird(2, 3, 3, 3);
    c = new Canine(10, 5, 5);

    cout << endl;

    cout << *a;
    cout << *dynamic_cast<Bird *>(b);
    cout << *dynamic_cast<Canine *>(c);

    cout << endl;

    a->move(6, 8);
    b->move(6, 7, 8);
    c->move(10, 10);


    cout << *a;
    cout << *dynamic_cast<Bird *>(b);
    cout << *dynamic_cast<Canine *>(c);

    cout << endl;

    a->eat();
    b->eat();
    c->eat();

    cout << endl;

    a->sleep();
    b->sleep();
    c->sleep();

    dynamic_cast<Canine *>(c)->hunt();

    return 0;


}