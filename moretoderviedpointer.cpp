#include<iostream>
using namespace std;

class Base{
    public:
        int base_var;
        virtual void show(){
            cout <<"Value of base_var is : "<<base_var;

        }
        virtual void set (int a){
            this->base_var = a;
        }

};
class Derived:public Base{
    public:
        void show(){
            cout << "Calling from dervied class ";
        }
};
int main()
{
    Derived derivedObj;
    Base *ptr=  &derivedObj;
    ptr->show();
}