//
// Created by Vadim on 07.03.2024.
//

#include "Appointmentholder.h"
#include <iostream>
using namespace std;

void Appointmentholder::setPhoneNumber() {
    cout<<"enter phone number";
    cin>>phoneNumber;
}
void Appointmentholder::getPhomeNumber() {
    cout<<"phone number"<<endl;
}
void Appointmentholder::info() {
    cout<<"Name: "<<name<<"\nAge: "<<age<<"\nphone number: "<<phoneNumber<<endl<<endl;
}




Appointmentholder::Appointmentholder(std::string &&Name, int Age, std::string &&Phone)
:Person(std::move(Name),Age),phoneNumber(std::move(Phone)){
    cout<<"called Appointmentholder constructor"<<endl;
}
Appointmentholder::~Appointmentholder(){
    cout<<"called Appointmentholder destructor"<<endl;
}


