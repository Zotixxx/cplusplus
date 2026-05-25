#include <iostream>
using namespace std;
class text
{
    string textGiven;

public:
    text(string t1)
    {
        textGiven = t1;
    }
    text operator + (text t){
        return textGiven+" " +t.textGiven;
    }
    void display(){
        cout<< textGiven;
    }
};
int main()
{
    text t1("Hello");
    text t2("World");

    text t3 = t1 + t2;
    t3.display();
    return 0;
}