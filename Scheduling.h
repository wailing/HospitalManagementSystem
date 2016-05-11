/**
 * Project Untitled
 */


#ifndef _SCHEDULING_H
#define _SCHEDULING_H

#include <iostream>

class Scheduling {
public: 
    Scheduling();
    ~Scheduling();
    /**
     * @param string doctorname
     * @param string patientname
     * @param string date
     */
    void DisplayPlanning(std::string doctorname, std::string patientname, std::string date);
private: 
    std::string PatientName;
    std::string DoctorName;
    std::string date;
};

#endif //_SCHEDULING_H