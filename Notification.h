/**
 * Project Untitled
 */


#ifndef _NOTIFICATION_H
#define _NOTIFICATION_H

using namespace std;
class Notification {
public:
    Notification(const string &date, const string &doctorName, const string &patientName) : date(date),
                                                                                            doctorName(doctorName),
                                                                                            patientName(patientName) { }

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