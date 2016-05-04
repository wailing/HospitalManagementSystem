/**
 * Project Untitled
 */


#ifndef _DOCTOR_H
#define _DOCTOR_H

#include "string.h"
class Doctor {
public: 

    Doctor();
    ~Doctor();
    /**
     * @param string lastname
     * @param string firstname
     */
    void ModifyDoctorDetails(std::string lastname, std::string firstname);
    
    /**
     * @param string username
     * @param string pwd
     * @param string name
     * @param string adress
     * @param string email
     * @param int age
     */
    void registerDoctor(std::string username, std::string pwd, std::string name, std::string address, std::string email, int age);
private: 
    std::string speciality;
};

#endif //_DOCTOR_H