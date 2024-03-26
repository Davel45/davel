
#ifndef LAB_PAYMENTINTERFACE_H
#define LAB_PAYMENTINTERFACE_H
#include <iostream>

using namespace std;
class Payinterface {
    friend ostream &operator<<(ostream &os, const Payinterface &obj);
public:
    virtual void print(ostream &os) const = 0;
    virtual ~Payinterface() {};
    virtual void print_namehopay()const=0;
};
/*ostream &operator<<(ostream &os, const Payinterface &obj){
obj.print(os);
return os;
};*/
#endif //LAB_PAYMENTINTERFACE_H
