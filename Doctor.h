/**
 * Project Untitled
 */


#ifndef _DOCTOR_H
#define _DOCTOR_H

class Doctor {
public: 
    
    /**
     * @param string lastname
     * @param string firstname
     */
    void ModifyDoctorDetails(void string lastname, void string firstname);
    
    /**
     * @param string username
     * @param string pwd
     * @param string name
     * @param string adress
     * @param string email
     * @param int age
     */
    void registerDoctor(void string username, void string pwd, void string name, void string adress, void string email, void int age);
private: 
    string speciality;
};

#endif //_DOCTOR_H