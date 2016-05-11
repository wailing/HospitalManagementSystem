/**
 * Project Untitled
 */

class Users;

#ifndef _ADMINISTRATOR_H
#define _ADMINISTRATOR_H

#include <string>
#include "Users.h"

class Administrator: public Users {
public:

    Administrator(const std::string &pseudo, const std::string &name, const std::string &password, const std::string &address,
                  const std::string &email, int age) : Users(pseudo, name, password, address, email, age) { }

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