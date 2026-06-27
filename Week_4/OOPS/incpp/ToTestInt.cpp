#include <iostream>

class Test {
public:
    virtual int square(int num) = 0; 
    virtual ~Test() {} 
};

class Arithmetic : public Test {
public:
    int square(int num) override {
        return num * num;
    }
};

class ToTestInt {
public:
    void run() {
        Arithmetic arithmeticObj;
        int result = arithmeticObj.square(5);
        std::cout << "Square of 5 is: " << result << std::endl;
    }
};

int main() {
    ToTestInt testRunner;
    testRunner.run();
    return 0;
}
