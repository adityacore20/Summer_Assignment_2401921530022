#include <iostream>

class Point {
private:
    int x;
    int y;

public:
    Point() {
        x = 0;
        y = 0;
    }

    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void setX(int x) {
        this->x = x;
    }

    void setY(int y) {
        this->y = y;
    }

    void setXY(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void printPoint() {
        std::cout << "Point coordinates: (" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Point p1;
    Point p2(10, 20);

    p1.setX(5);
    p1.setY(8);
    p1.printPoint();

    p2.setXY(15, 30);
    p2.printPoint();

    return 0;
}
