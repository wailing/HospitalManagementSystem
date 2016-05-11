/**
 * Project Untitled
 */


#ifndef _HOSPITAL_H
#define _HOSPITAL_H
#include <string>
#include "Patient.h"
#include "Doctor.h"
#include "Administrator.h"
#include "Appointment.h"
#include <vector>

class Hospital {
public:

    Hospital();
    ~Hospital();
    std::vector<Patient*> listPatient;
    std::vector<Doctor*> listDoctor;
    std::vector<Administrator*> listAdmin;
    std::vector<Appointment*> listAppointment;
    
    void registerAdmin();

    void registerPatient(std::string username, std::string pwd, std::string name, std::string adress, std::string email, int age, std::string function);
    
    void registerDoctor();

    void displayHospital();
private: 
    std::string name;
};

#endif //_HOSPITAL_H