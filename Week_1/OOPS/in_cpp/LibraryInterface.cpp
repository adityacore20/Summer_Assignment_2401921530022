#include <iostream>
#include "KidUsers.h"
#include "AdultUser.h"

int main() {
    KidUsers kid;
    
    kid.age = 10;
    kid.registerAccount();

    kid.age = 18;
    kid.registerAccount();

    kid.bookType = "Kids";
    kid.requestBook();

    kid.bookType = "Fiction";
    kid.requestBook();

    std::cout << std::endl;

    AdultUser adult;

    adult.age = 5;
    adult.registerAccount();

    adult.age = 23;
    adult.registerAccount();

    adult.bookType = "Kids";
    adult.requestBook();

    adult.bookType = "Fiction";
    adult.requestBook();

    return 0;
}

