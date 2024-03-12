//
// Created by Vadim on 07.03.2024.
//

#ifndef LABVADIM_PERSON_H
#define LABVADIM_PERSON_H


#include <iostream>
using namespace  std;
class Person {
protected:
    string name;
    int age;
public:
    void set_name();
    void get_name();
    void set_age();
    void get_age();
    virtual void info();
    Person(string &&name="None",int age=0);
    Person(const Person& other):name(other.name),age(other.age){}
    virtual ~Person();
};


#endif //LABVADIM_PERSON_H
