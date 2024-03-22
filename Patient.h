#ifndef LABVADIM_PATIENT_H
#define LABVADIM_PATIENT_H
#include <iostream>
#include "Person.h"
using namespace std;

class Patient:public Person{
private:
    //string name;
    //int age;
    string phonenamber;
    static int patientCounter;
public:
    //void set_name();
    //void get_name();
    //void set_age();
    //void get_age();
    void set_phonenamber();
    void get_phonenamber();
    void info() override;
    void displayInfo() override;
    static int getpatient();

    Patient();
    Patient(string Namepatient);
    Patient(string Namepatient,int Age);
    Patient(string Namepatient,int Age,string Phonepatient);
    Patient(const Patient& other): Person(other),phonenamber(other.phonenamber){}
    Patient& operator++();
    ~Patient();
};





#endif //LABVADIM_PATIENT_H