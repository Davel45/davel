#include <iostream>
#include "Doctor.h"
void Doctor::set_name()
{
    cout<<"Enter name doctor: ";
    string Name;
    cin>>Name;
    name=Name;
}
void Doctor::get_name()
{
    cout<<"name doctor: "<<name<<endl;
}
void Doctor::set_specialty()
{
    cout<<"enter specialty: ";
    string Specialty;
    cin>>Specialty;
    specialty=Specialty;
}
void Doctor::get_specialty()
{
    cout<<"specialty: "<<specialty<<endl;
}
void Doctor::set_age()
{
    cout<<"enter age doctor: ";
    int Age;
    cin>>Age;
    age=Age;
}
void Doctor::get_age()
{
    cout<<"age doctor: "<<age<<endl;
}
void Doctor::info()
{
    cout<<"name doctor: "<<name<<"\nspecialty: "<<specialty<<"\nage doctor: "<<age<<endl<<endl;

}
Doctor::Doctor(std::string &&Namedoctor,int Age,std::string &&Specialtydoctor):
name(Namedoctor),age(Age),specialty(Specialtydoctor)
{
    cout<<"called constructor default"<<endl;
}
Doctor::~Doctor()
{
    cout<<"called Doctor destructor"<<endl;
}