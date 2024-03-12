
#include "Person.h"
#include <iostream>

using namespace std;
Person::Person(std::string &&Name,int Age):name(std::move(Name)),age(Age){}
void Person::set_name() {
    cout<<"Enter name: ";
    string name;
    cin>>name;
}
void Person::get_name() {
    cout<<"Name: "<<name<<endl;
}
void Person::set_age() {
    cout<<"Enter age: ";
    int age;
    cin>>age;
}
void Person::get_age() {
    cout<<"Age: "<<age<<endl;
}
void Person::info() {
    cout<<"Name: "<<name<<"\nAge: "<<age<<endl;
}
Person::~Person(){
    cout<<"called Person distructor"<<endl;
}
