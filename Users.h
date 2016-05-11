/**
 * Project Untitled
 */


#ifndef _USERS_H
#define _USERS_H


#include <string>

class Users {
public:

    Users(const std::string &pseudo, const std::string &name, const std::string &password, const std::string &address,
          const std::string &email, int age) : pseudo(pseudo), name(name), password(password), address(address),
                                               email(email), age(age) { }

    const std::string &getPseudo() const {
        return pseudo;
    }

    const std::string &getPassword() const {
        return password;
    }

    const std::string &getAddress() const {
        return address;
    }

    const std::string &getName() const {
        return name;
    }

    const std::string &getEmail() const {
        return email;
    }

    int getAge() const {
        return age;
    }

private:
    std::string pseudo;
    std::string password;
    std::string name;
    std::string address;
    std::string email;
    int age;
};

#endif //_USERS_H