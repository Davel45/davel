#include <iostream>
#include "Doctor.h"
#include "Patient.h"
#include "Appointment.h"
using namespace std;
int main(){
 Doctor dock ("Maksim",25,"surgeon");
 dock.info();

 Patient pat ("Wowa",18,"0981255135");
 pat.info();

 Appointment appp("15:00","14 april");
 appp.info();
 return 0;
}