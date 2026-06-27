#include <iostream>

class Box {
protected:
    double length;
    double breadth;

public:
    Box(double length, double breadth) {
        this->length = length;
        this->breadth = breadth;
    }

    double findArea() {
        return length * breadth;
    }
};

class Box3d : public Box {
private:
    double height;

public:
    Box3d(double length, double breadth, double height) : Box(length, breadth) {
        this->height = height;
    }

    double findVolume() {
        return findArea() * height;
    }
};

int main() {
    Box3d myBox(5.0, 4.0, 3.0);

    std::cout << "Surface Base Area: " << myBox.findArea() << std::endl;
    std::cout << "Total Volume: " << myBox.findVolume() << std::endl;

    return 0;
}
