#include <iostream>
using namespace std;

class Distance {
    protected:
        int feet, inch;
        public:
            Distance() {
                feet = 0;
                inch = 0;
            }
            void putDist() {
                cout << "Feet: " << feet << endl;
                cout << "Inch: " << inch << endl;
            }
            void getDist() {
                cout << "Enter value of Feet: ";
                cin >> feet;
                cout << "Enter value of Inch: ";
                cin >> inch;
            }
};

class DistIncr : public Distance {
    public:
        void operator++(int) {
            inch++;
            if (inch >= 12) {
                feet++;
                inch -= 12;
                // inch= inch - 12
            }
        }
};

int main() {
    DistIncr d1;
    d1.getDist();
    d1++;
    d1.putDist();
}