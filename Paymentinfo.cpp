#include <iostream>
#include "Paymentinfo.h"
using namespace std;
int Payinfo::number=0;
int Payinfo::getNumber() {
    return number;
}
void Payinfo::set_namepatienthowpay() {
    number++;
   cout<<"Enter name: ";
   string Namepatienthowpay;
   cin>>Namepatienthowpay;
   namepatienthowpay=Namepatienthowpay;
}
void Payinfo::get_namepatienthowpay() {
    cout<<"Name patient how pay: "<<namepatienthowpay<<endl;
}
void Payinfo::set_timepay() {
    cout<<"Enter time: ";
    string Timepay;
    cin>>Timepay;
    timepay=Timepay;
}
void Payinfo::get_timepay() {
    cout<<"Time pay: "<<timepay<<endl;
}
void Payinfo::set_howmuchpay() {
    cout<<"Enter howmuchpay: ";
    float Howmuchpay;
    cin>>Howmuchpay;
    howmuchpay=Howmuchpay;
}
void Payinfo::get_howmuchpay() {
    cout<<"How much pay: "<<howmuchpay<<endl;
}
void Payinfo::info() {
    cout<<"Name patient how pay: "<<namepatienthowpay<<"\nTime pay: "<<timepay<<"\nHow much pay: "<<howmuchpay<<endl<<endl;
}
Payinfo::Payinfo(const Payinfo &other) {
    namepatienthowpay=other.namepatienthowpay;
    timepay=other.timepay;
    howmuchpay=other.howmuchpay;
}

Payinfo::~Payinfo(){
    cout<<"called Payinfo destructor"<<endl;
}
