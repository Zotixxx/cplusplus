#include<iostream>
using namespace std;
class A{
    int g ;
    public:
        A& setData(int a){
            this->g= a;
        }
        void display(){
            cout <<"value of a is : "<<g<<endl;
        }
        A operator+(A tempA){
            tempA.g+g;
        }
};
int main()
{
 A a;
 a.setData(5);
 a.display();
 return 0;
}

// #include<iostream>
// using namespace std;
// class Distance{
//     int feet;
//     int inch;
//     public:
//         Distance(int f, int i):feet(f),inch(i){
//         }
//         Distance(){};
//         Distance operator + (Distance d){
//             feet+=d.feet;
//             inch+=d.inch;
            
//             if (inch>=12){
//                 feet++;
//                 inch-=12;
//             }
//             return *this;

//         }
//         void display(){
//             cout << "Feet: "<< feet<<endl;
//             cout <<"Inch: "<< inch;
//         }
// };
// int main()
// {
//     Distance  d1(4,5),d2(7,8);
//     Distance d3;
//     d3 = d1+d2;
//     d3.display();
//  return 0;
// }