/**
 * Project Untitled
 */


#ifndef _HOSPITAL_H
#define _HOSPITAL_H
#include "string.h"

class Hospital {
public:

    Hospital();
    ~Hospital();
    void listPatient;
    std::Vector listDoctor;
    std::Vector listAdmin;
    std::Vector listAppointment;
    
    void registerAdmin();
    
    void registerPatient();
    
    void registerDoctor();
private: 
    std::string name;
};

#endif //_HOSPITAL_H