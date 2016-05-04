/**
 * Project Untitled
 */


#ifndef _PATIENT_H
#define _PATIENT_H

class Patient {
public: 
    Patient();
    ~Patient();
    /**
     * @param string lastname
     * @param string firstname
     */
    void ModifyPatientDetails(std::string lastname, std::string firstname);
    
    /**
     * @param string username
     * @param string pwd
     * @param string name
     * @param string adress
     * @param string email
     * @param int age
     */
    void registerPatient(std::string username, std::string pwd, std::string name, std::string adress, std::string email, int age);
private: 
    std::string function;
};

#endif //_PATIENT_H