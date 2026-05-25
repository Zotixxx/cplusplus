#include<iostream>
using namespace std;

class Car{
    string model;
    int make;

    public:
        Car(string mod,int mk){
            model = mod;
            make = mk;
        }
        Car(){};
    void display(){
        cout << "Model: "<<model<<endl;
        cout << "Make: "<<make ;

    }
};

int main()
{
//  int a = 12l;
//  int arr[] = {3,4};
//  int *ptrarr = arr;
//  cout <<ptrarr<<endl;
//  cout <<ptrarr+1 <<endl;
//  return 0;
    // Car *p = new Car("Civic",1976);
    // p->display();
    // delete p;

    // int *arr = new int[45];
    // float *flo = new float(62.0);
    // cout <<endl<< *flo;
    // arr[1]= 30;
    // arr[2]= 40;
    // delete arr;
    // cout <<arr[2]<<endl;
    // cout <<arr[1];
    // int *num  = new int(33);
    // cout <<*num;
    // int a;
    // cout <<endl<<a;
    //  int* ptr1 = new int;

    // // Initializing pointer with value 20
    // int* ptr2 = new int(20);

    // cout << "Value of ptr1 = " << *ptr1 << "\n";
    // cout << "Value of ptr2 = " << *ptr2 << "\n";

    // // Destroying ptr1
    // delete ptr1;
    // // Destroying ptr2
    // delete ptr2;

    Car c1("BMW",1991);
    Car *ptr = &c1;
    (*ptr).display();
    Car *ptr2 = new Car("AUDI",1967);
    (*ptr2).display();

    int *a = new int (6);
    cout <<(*a);

    cout <<endl;
    Car *arrobj = new Car[4];
    arrobj->display();
   arrobj->display();
    (arrobj+1)->display();
    
}