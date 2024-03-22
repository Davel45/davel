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
    virtual void set_name();
    virtual void get_name();
    virtual void set_age();
    virtual void get_age();
    virtual void info()=0;
    virtual  void displayInfo()=0;
    Person(string &&name="None",int age=0);
    Person(const Person& other):name(other.name),age(other.age){}
    virtual ~Person();
};


#endif //LABVADIM_PERSON_H
