#ifndef VEENA_H
#define VEENA_H

#include "../Playable.h"
#include <iostream>

namespace music {
    namespace string {
        class Veena : public music::Playable {
        public:
            void play() const override {
                std::cout << "Playing the Veena" << std::endl;
            }
        };
    }
}

#endif
