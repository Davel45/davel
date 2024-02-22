#ifndef LABVADIM_APPOINTMENT_H
#define LABVADIM_APPOINTMENT_H
#include<iostream>
using namespace std;

class Appointment{
private:
    string time;
    string data;
public:
    void set_time();
    void get_time();
    void set_data();
    void get_data();
    void info();

    Appointment();
    Appointment(string &&Time);
    Appointment(string &&Time,string &&Data);
    ~Appointment();
};




#endif //LABVADIM_APPOINTMENT_H