#include<iostream>
using namespace std;
class animal{
    public:
    virtual void makeSound()= 0;
    void eatFood(){
        cout << "eating food ";
    }
};
class cat :public animal{
    
};
int main()
{
 

 return 0;
}