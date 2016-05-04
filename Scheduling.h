/**
 * Project Untitled
 */


#ifndef _SCHEDULING_H
#define _SCHEDULING_H

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
    string PatientName;
    string DoctorName;
    string date;
};

#endif //_SCHEDULING_H