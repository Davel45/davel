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
    Person(string &&Name="None",int Age=0);
    virtual ~Person();
};


#endif //LABVADIM_PERSON_H
