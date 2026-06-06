#ifndef KID_USERS_H
#define KID_USERS_H

#include <iostream>
#include <string>
#include "LibraryUser.h"

class KidUsers : public LibraryUser {
public:
    int age;
    std::string bookType;

    void registerAccount() override {
        if (age < 12) {
            std::cout << "You have successfully registered under a Kids Account" << std::endl;
        }
        if (age > 12) {
            std::cout << "Sorry, Age must be less than 12 to register as a kid" << std::endl;
        }
    }

    void requestBook() override {
        if (bookType == "Kids") {
            std::cout << "Book Issued successfully, please return the book within 10 days" << std::endl;
        } else {
            std::cout << "Oops, you are allowed to take only kids books" << std::endl;
        }
    }
};

#endif

