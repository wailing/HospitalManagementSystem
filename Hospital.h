/**
 * Project Untitled
 */


#ifndef _HOSPITAL_H
#define _HOSPITAL_H

class Hospital {
public: 
    void listPatient;
    void listDoctor;
    void listAdmin;
    void listAppointment;
    
    void registerAdmin();
    
    void registerPatient();
    
    void registerDoctor();
private: 
    string name;
};

#endif //_HOSPITAL_H