#include <iostream>

using namespace std;

class Distance{
    int feet,inch;
    public:
        Distance(){
            feet= 0;
            inch= 0;

        }
        Distance (int f , int i){
            feet =f;
            inch =i;
        }
        Distance operator+(Distance d){
            // Distance temp;
            // temp.feet = feet +d.feet;
            // temp.inch= inch+d.inch;
            // return temp;
            feet +=d.feet;
            inch +=d.inch;
            
        }
        void Display(){
            cout <<"Feet: "<<feet;
            cout <<" Inch: "<<inch;
        }
};
int main (){
    Distance d1(5,7), d2(8,9), d3(7,5) ,d4;
    d4 = d1+d2+d3;
    d4.Display();

}