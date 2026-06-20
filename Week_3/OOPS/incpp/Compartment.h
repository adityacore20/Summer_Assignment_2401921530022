#ifndef COMPARTMENT_H
#define COMPARTMENT_H

#include <string>

class Compartment {
public:
    virtual std::string notice() = 0;
    virtual ~Compartment() {}
};

class FirstClass : public Compartment {
public:
    std::string notice() override {
        return "Notice: First Class Compartment - Authorized passengers only.";
    }
};

class Ladies : public Compartment {
public:
    std::string notice() override {
        return "Notice: Ladies Compartment - Strictly reserved for women.";
    }
};

class General : public Compartment {
public:
    std::string notice() override {
        return "Notice: General Compartment - Open to all valid ticket holders.";
    }
};

class Luggage : public Compartment {
public:
    std::string notice() override {
        return "Notice: Luggage Van - Strictly for heavy luggage and cargo.";
    }
};

#endif
