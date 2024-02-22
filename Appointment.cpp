#include <iostream>
#include "Appointment.h"
using namespace std;

void Appointment::set_time()
{
    cout<<"enter time: ";
    string Time;
    cin>>Time;
    time=Time;
}
void Appointment::get_time()
{
    cout<<"time: "<<time<<endl;
}
void Appointment::set_data()
{
    cout<<"enter data: ";
    string Data;
    cin>>Data;
    data=Data;
}
void Appointment::get_data()
{
    cout<<"data: "<<data<<endl;
}
void Appointment::info()
{
    cout<<"time: "<<time<<"\ndata:"<<data<<endl<<endl;
}
Appointment::Appointment(std::string &&Time)
{
    time=Time;
    data="None";
}
Appointment::Appointment(std::string &&Time,std::string &&Data)
{
    time=Time;
    data=Data;
}
Appointment::~Appointment()
{
    cout<<"called Appointment destructor"<<endl;
}