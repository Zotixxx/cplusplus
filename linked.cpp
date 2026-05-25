#include<iostream>
#include <list>
using namespace std;

class base1{
    public:
        void greet(){
            cout <<"Hello";
        }
};
class base3{
    public:
        void greet(){
            cout <<"Parent Base 3";
        }
};
class base2 : public base1 , public base3{
    public:

};

int main()
{
 base2 b2;
 b2.base3::greet();
 return 0;
}