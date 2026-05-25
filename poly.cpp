#include<iostream>
using namespace std;

class Base{
    public:
        int base_var;
        void show(){
            cout <<"Value of base_var is : "<<base_var;

        }
        void set (int a){
            this->base_var = a;
        }

};
class Derived:public Base{

};
int main()
{
 ///TWO ways to polymorphisam
//  compile time- 1) Operator overloding 2) Function overloaing
//  run time - using virtual function  

    Base Baseb1;
    Derived Derivedd1;
    Base *ptr_to_base;
    //we can point a base class pointer to a dervied class object;
    // it will work for each methods of base class but not for derived class
    ptr_to_base = &Derivedd1;
    ptr_to_base->set(5);
    ptr_to_base->show();
    
    Derived *ptr_to_derived;
    ptr_to_derived = &Derivedd1;
    ptr_to_derived->set(6);
    ptr_to_derived->show();

    /*
    Base Pointer $\rightarrow$ Derived Object: Works perfectly. You can access all the Base features, but the Derived features are hidden from it.Derived Pointer $\rightarrow$ Derived Object: Works perfectly. You get full access to both Base and Derived features.Derived Pointer $\rightarrow$ Base Object: Absolutely illegal; the compiler will block it.
    */

 return 0;
}