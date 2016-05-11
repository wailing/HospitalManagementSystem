/**
 * Project Untitled
 */

class Users;

#ifndef _DOCTOR_H
#define _DOCTOR_H

#include <string>
#include "Users.h"

class Doctor: public Users {
public:


    Doctor(const std::string &pseudo, const std::string &name, const std::string &password, const std::string &adress,
           const std::string &email, int age, const std::string &speciality) : Users(pseudo, name, password, adress,
                                                                                     email, age),
                                                                               speciality(speciality) { }

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