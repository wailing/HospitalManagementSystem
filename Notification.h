/**
 * Project Untitled
 */


#ifndef _NOTIFICATION_H
#define _NOTIFICATION_H

class Notification {
public: 
    
    /**
     * @param string date
     * @param string doctorName
     * @param string patientName
     */
    bool SendNotification(void string date, void string doctorName, void string patientName);
private: 
    string date;
    string doctorName;
    string patientName;
};

#endif //_NOTIFICATION_H