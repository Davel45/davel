
#include "Person.h"
#include <iostream>
Person::Person(std::string &&Name,int Age):name(std::move(Name)),age(Age){}
Person::~Person(){
    cout<<"called Person distructor"<<endl;
}
