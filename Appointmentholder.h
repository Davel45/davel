//
// Created by Vadim on 07.03.2024.
//

#ifndef LABVADIM_APPOINTMENTHOLDER_H
#define LABVADIM_APPOINTMENTHOLDER_H
#include <iostream>
#include "Person.h"
using  namespace std;


class Appointmentholder: public Person{
protected:
    string phoneNumber;
public:
    void setPhoneNumber();
    void getPhomeNumber();
    void info();

    Appointmentholder(std::string &&Name="None",int Age=0,std::string &&Phone="None");
    virtual ~Appointmentholder();
};


#endif //LABVADIM_APPOINTMENTHOLDER_H
