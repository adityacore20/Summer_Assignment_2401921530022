#include <iostream>
#include "../music/string/Veena.h"
#include "../music/wind/Saxophone.h"

int main() {
    music::string::Veena v;
    v.play();

    music::wind::Saxophone s;
    s.play();

    music::Playable* p1 = &v;
    p1->play();

    music::Playable* p2 = &s;
    p2->play();

    return 0;
}
