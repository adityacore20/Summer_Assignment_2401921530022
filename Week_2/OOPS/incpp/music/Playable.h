#ifndef PLAYABLE_H
#define PLAYABLE_H

namespace music {
    class Playable {
    public:
        virtual ~Playable() = default;
        virtual void play() const = 0; 
    };
}

#endif
