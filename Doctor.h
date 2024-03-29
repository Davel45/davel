#ifndef LABVADIM_DOCTOR_H
#define LABVADIM_DOCTOR_H
#include <iostream>
#include "Person.h"
#include "Appointmentholder.h"

using namespace std;
class Doctor : public Person{
private:    
    //string name;
    string specialty;
    //int age;
public:
    //void set_name();
    //void get_name();
    void set_specialty();
    void get_specialty();
    //void set_age();
    //void get_age();
    void info();

    Doctor(string &&name="None",int age=0,string &&specialty="None");
    Doctor(const Doctor& other): Person(other),specialty(other.specialty){}

    ~Doctor();

    friend istream& operator>>(istream& input, Doctor& doctor);
    friend ostream& operator<<(ostream& output, const Doctor& doctor);
};


#endif //LABVADIM_DOCTOR_H