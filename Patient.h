#ifndef LABVADIM_PATIENT_H
#define LABVADIM_PATIENT_H
#include <iostream>

using namespace std;

class Patient{
private:
    string name;
    int age;
    string phonenamber;
public:
    void set_name();
    void get_name();
    void set_age();
    void get_age();
    void set_phonenamber();
    void get_phonenamber();
    void info();

    Patient();
    Patient(string Namepatient);
    Patient(string Namepatient,int Age);
    Patient(string Namepatient,int Age,string Phonepatient);
    ~Patient();
};





#endif //LABVADIM_PATIENT_H