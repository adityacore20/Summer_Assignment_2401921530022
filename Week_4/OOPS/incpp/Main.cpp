#include <iostream>

class Outer {
public:
    void display() {
        std::cout << "Display method inside Outer class." << std::endl;
    }

    class Inner {
    public:
        void display() {
            std::cout << "Display method inside Inner class." << std::endl;
        }
    };
};

int main() {
    Outer outerObj;
    outerObj.display();

    Outer::Inner innerObj;
    innerObj.display();

    return 0;
}
