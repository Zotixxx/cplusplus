#include<iostream>
using namespace std;
class counter{
    int num=0;
    public:
    //prefix 
    int operator ++ (){
        return num++;
    } 
    void display(){
        cout << "Vaue of of num: "<< num;
    }
};
int main()
{
counter c1;
 ++c1;
 ++c1;
 ++c1;
 ++c1;
 ++c1;
 c1.display();  
 return 0;
}