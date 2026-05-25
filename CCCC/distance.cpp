#include<iostream>
using namespace std;
class Distance{
    int feet;
    int inch;
    public:
        Distance(int f, int i):feet(f),inch(i){
        }
        Distance(){};
        Distance operator + (Distance d){
            Distance temp;
            temp.feet = feet + d.feet;
            temp.inch = inch + d.inch;
            if (temp.inch>=12){
                temp.feet++;
                temp.inch-=12;
            }
            return temp;

        }
        void display(){
            cout << "Feet: "<< feet<<endl;
            cout <<"Inch: "<< inch;
        }
};
int main()
{
    Distance  d1(4,5),d2(7,8);
    Distance d3;
    d3 = d1+d2;
    d3.display();
 return 0;
} 