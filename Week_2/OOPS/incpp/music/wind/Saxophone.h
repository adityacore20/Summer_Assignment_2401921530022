#ifndef SAXOPHONE_H
#define SAXOPHONE_H

#include "../Playable.h"
#include <iostream>

namespace music {
    namespace wind {
        class Saxophone : public music::Playable {
        public:
            void play() const override {
                std::cout << "Playing the Saxophone" << std::endl;
            }
        };
    }
}

#endif
