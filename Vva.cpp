#include <iostream> 
using namespace std;
class Distance {
    protected:
        int feet ,inch ;
        public:
            Distance (){
                feet = 0 ;
                inch = 0;

            }
            void putDist(){
                cout <<"Feet : ",feet;
                cout << "Inch :  ", inch;

            }
            void getDist(){
                cout <<"Enter value of Feet : ";
                cin >> feet;
                cout <<"Enter value of Inch : ";
                cin >> inch;
            }
};//End base class
class DistIncr: public Distance{
    public:
        void operator ++ (int )
        {
            inch++;
            if (inch>=12){
                feet++;
                inch-=12;
            }

        }
};//Dervied Class end

int main (){
    DistIncr d1;
    d1.getDist();
    d1++;
    d1.putDist();

}