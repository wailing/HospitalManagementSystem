/**
 * Project Untitled
 */


#ifndef _NOTIFICATION_H
#define _NOTIFICATION_H

class Notification {
public:
    Notification();
    ~Notification();
    
    /**
     * @param string date
     * @param string doctorName
     * @param string patientName
     */
    bool SendNotification(string date, string doctorName, string patientName);
private: 
    string date;
    string doctorName;
    string patientName;
};

#endif //_NOTIFICATION_H