#include <iostream>
#include "Patient.h"
using namespace std;
void Patient::set_name()
{
    cout<<"enter name patient: ";
    string Name;
    cin>>Name;
    name=Name;
}
void Patient::get_name()
{
    cout<<"name patient: "<<name<<endl;
}
void Patient::set_age()
{
    cout<<"enter age patient: ";
    int Age;
    cin>>Age;
    age=Age;
}
void Patient::get_age()
{
    cout<<"age patient: "<<age<<endl;
}
void Patient::set_phonenamber()
{
    cout<<"enter phonenamber:";
    string Phonenamber;
    cin>>Phonenamber;
    phonenamber=Phonenamber; 
}
void Patient::get_phonenamber()
{
    cout<<"phonenamber patient: "<<phonenamber<<endl;
}
void Patient::info()
{
    cout<<"name patient; "<<name<<"\nage patient: "<<age<<"\nphonenamber patient: "<<phonenamber<<endl<<endl;    
}
Patient::Patient()
{
    name="None";
    age=0;
    phonenamber="None";
}
Patient::Patient(std::string Namepatient):Patient()
{
    name=Namepatient;
}
Patient::Patient(std::string Namepatient, int Age):Patient(Namepatient)
{
    age=Age;
}
Patient::Patient(std::string Namepatient, int Age, std::string Phonenamberpatient):Patient(Namepatient,Age)
{
phonenamber=Phonenamberpatient;
}

Patient& Patient::operator++()
{
    ++age;
    return *this;
}

Patient::~Patient()
{
    cout<<"called Patient destructor"<<endl;
}