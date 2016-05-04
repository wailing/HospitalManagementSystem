/**
 * Project Untitled
 */


#ifndef _USERS_H
#define _USERS_H

#include "Patient.h"
#include "Doctor.h"
#include "Administrator.h"


class Users: public Patient, public Doctor, public Administrator {
private: 
    string pseudo;
    string password;
    string name;
    string adress;
    string email;
    int age;
};

#endif //_USERS_H