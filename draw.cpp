#include <iostream>
using namespace std;

class Distance {
    int feet, inch;

public:
    // Constructor
    Distance(int x = 0, int y = 0) {
        feet = x;
        inch = y;
    }

    void Display() {
        cout << "Feet: " << feet << " Inch: " << inch << endl;
    }
    operator float() const {
        return feet + (inch / 12.0);
    }
};

int main() {
    Distance s(4, 5);
    s.Display();
    float x = s; 
    cout << "Distance in float = " << x << endl;
    return 0;
}