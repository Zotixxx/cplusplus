#include<iostream>
using namespace std;
class A {

    public:
    A(int a, int b){
        cout <<"Good";
    }
};
class B{    
    int l,k;
    public:
    // B(int a,int b):k(a),l(b)        //This will work
    // B(int a,int b):l(a),k(l+a)        //This will not work
    B(int a,int b):k(a),l(a+k)        //This will not work

    {
        cout <<"Value of K "<<k<<endl;
        cout <<"Value of L "<<l<<endl;
    }
};
class C : public A, public B{
    public:
    C(int a1,int a2,int a3,int a4):A( a1,  a2),B(a3,a4){

    }
};
int main()
{
 C objc(4,5,6,9);

 return 0;
}