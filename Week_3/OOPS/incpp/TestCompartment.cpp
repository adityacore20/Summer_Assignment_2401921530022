#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Compartment.h"

int main() {
    srand(time(0));
    Compartment* compartments[10];

    for (int i = 0; i < 10; i++) {
        int randomNum = (rand() % 4) + 1;
        
        switch (randomNum) {
            case 1:
                compartments[i] = new FirstClass();
                break;
            case 2:
                compartments[i] = new Ladies();
                break;
            case 3:
                compartments[i] = new General();
                break;
            case 4:
                compartments[i] = new Luggage();
                break;
        }
    }

    for (int i = 0; i < 10; i++) {
        std::cout << "Position " << i << ": " << compartments[i]->notice() << std::endl;
    }

    for (int i = 0; i < 10; i++) {
        delete compartments[i];
    }

    return 0;
}
