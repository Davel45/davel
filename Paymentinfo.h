
#ifndef LABVADIM_PAYMENTINFO_H
#define LABVADIM_PAYMENTINFO_H
#include <iostream>

using namespace std;
class Payinfo{
private:
    string namepatienthowpay;
    string timepay;
    float howmuchpay;
    static int number;
public:
    void set_namepatienthowpay();
    void get_namepatienthowpay();
    void set_timepay();
    void get_timepay() const;
    void set_howmuchpay();
    void get_howmuchpay();
    void info();
    static int getNumber();

    Payinfo(string &&namepatienthowpay="None",string &&timepay="None",float howmuchpay=0);

    Payinfo(const Payinfo& other);

    ~Payinfo();
};






#endif //LABVADIM_PAYMENTINFO_H
