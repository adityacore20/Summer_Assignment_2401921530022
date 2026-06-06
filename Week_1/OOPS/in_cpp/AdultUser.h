#ifndef ADULT_USER_H
#define ADULT_USER_H

#include <iostream>
#include <string>
#include "LibraryUser.h"

class AdultUser : public LibraryUser {
public:
    int age;
    std::string bookType;

    void registerAccount() override {
        if (age > 12) {
            std::cout << "You have successfully registered under an Adult Account" << std::endl;
        }
        if (age < 12) {
            std::cout << "Sorry, Age must be greater than 12 to register as an adult" << std::endl;
        }
    }

    void requestBook() override {
        if (bookType == "Fiction") {
            std::cout << "Book Issued successfully, please return the book within 7 days" << std::endl;
        } else {
            std::cout << "Oops, you are allowed to take only adult Fiction books" << std::endl;
        }
    }
};

#endif

