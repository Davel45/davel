
#ifndef LABVADIM_PAYMENTINFO_H
#define LABVADIM_PAYMENTINFO_H
#include <iostream>
#include "Paymentinterface.h"

using namespace std;
class Payinfo:public Payinterface{
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
    virtual void print(ostream &os) const override;
    virtual void print_namehopay()const override;
    static int getNumber();

    Payinfo(string &&namepatienthowpay="None",string &&timepay="None",float howmuchpay=0);

    Payinfo(const Payinfo& other);

    virtual~Payinfo();
};







#endif //LABVADIM_PAYMENTINFO_H
