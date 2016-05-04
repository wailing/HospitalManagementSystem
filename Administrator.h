/**
 * Project Untitled
 */


#ifndef _ADMINISTRATOR_H
#define _ADMINISTRATOR_H

#include "string.h"

class Administrator {
public:

    Administrator();
    ~Administrator();
    
    /**
     * @param string lastname
     * @param string firstname
     */
    void modifyAdminDetails(std::string lastname, std::string firstname);
    
    /**
     * @param string username
     * @param string pwd
     * @param string name
     * @param string adress
     * @param string email
     * @param int age
     */
    void registerAdministrator(std::string username, std::string pwd, std::string name, std::string adress, std::string email, int age);
};

#endif //_ADMINISTRATOR_H