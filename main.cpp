#include <iostream>
#include "Doctor.h"
#include "Patient.h"
#include "Appointment.h"
#include "Paymentinfo.h"
using namespace std;
void displayinfo(Person& person){
    person.info();
}
int main(){
 Doctor dock("Maksim",25,"surgeon");
 Person *person1= &dock;
 person1->displayInfo();
 person1->info();

 Patient pat ("Wowa",18,"0981255135");
 ++pat;
 cout<<"Patirnt info: "<<endl;
pat.info();

 Appointment appp("15:00","14 april");
 appp.info();

 Payinfo pay("Maksim","11 april",1850);
 pay.info();

cout<<"Statick number:"<<&Patient::getpatient<<endl;

Payinfo paycopy=pay;
paycopy.info();

cout<<dock;
 return 0;
}