#include<iostream>
using namespace std;

class comp {
private:
    int x, y;

public:
    comp(int x, int y) : x(x), y(y) {}

    comp operator +(const comp& c2) {
        return comp(x + c2.x, y + c2.y);
    }

    comp operator -() {
        return comp(-x, -y);
    }

    void display() {
        cout << x << " + " << y << "i" << endl;
    }
};

int main() {
    comp comp1(3, 4), comp2(1, -2), comp3;
    comp3 = comp1 + comp2;
    cout << "Result of addition: ";
    comp3.display();

    comp a(2, 3);
    cout << "Original complex number: ";
    a.display();
    cout << "Negation of the complex number: ";
    (-a).display();

    return 0;
}

