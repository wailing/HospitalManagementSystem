/**
 * Project Untitled
 */


#ifndef _APPOINTMENT_H
#define _APPOINTMENT_H

class Appointment {
public: 
    
    /**
     * @param Doctor doctor
     * @param Patient patient
     */
    bool FixAppointment(void Doctor doctor, void Patient patient);
    
    /**
     * @param Doctor doctor
     * @param Patient patient
     */
    void SeeAppointment(void Doctor doctor, void Patient patient);
private: 
    string date;
    bool isAnEmergency;
    Doctor doctor;
    Patient patient;
    string medicalreport;
    int cost;
};

#endif //_APPOINTMENT_H