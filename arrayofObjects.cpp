#include<iostream>
using namespace std;
class shop {
    int itemID;
    int price;
    public:
        shop(){};
        void display(){
            cout << itemID <<endl;
            cout << price<< endl;
        }
        void setData(int a, int b){
            itemID= a;
            price = b;
        }
};
int main()
{
    int k, p;
 shop *ptr = new shop[4];
 for(int i = 0 ;i<4;i++){
    cout <<"Enter Value of ItemID and price ";
    cin >> k >> p ;
    //method 1 
    // (ptr)->setData(k,p);
    // ptr++;

    //method 2
    (ptr+i)->setData(k,p);
 }
 for(int i=0;i<4;i++){
    (ptr+i)->display();
 }
 delete [] ptr;
 return 0;
}