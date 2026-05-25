#include <iostream>
#include <string.h>
using namespace std;
class employee
{
    string name;
    int number;

public:
    void getData()
    {
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Employee Number : ";
        cin >> number;
    }
    void display()
    {
        cout << "Employee Name : " << name << endl;
        cout << "Employee Number : " << number;
    }
};
class manager : public employee
{
private:
    string title;
    int clubdue;

public:
    void getData()
    {
        cout << "Enter Title : ";
        cin >> title;
        cout << "Enter clubdue";
        cin >> clubdue;
    }
};

class scientist : public employee
{
private:
    int noOfPublications;
};

class labour : public employee
{
private:
    int noOfWorkingDays;
    int wage;

public:
    void getDataLabour()
    {
        cout << "Enter number of working days : ";
        cin >> noOfWorkingDays;
        cout << "Enter wage :";
        cin >> wage;
    }
    void displayLabour  (){
        cout << "No of working days: "<<noOfWorkingDays <<endl;
        cout << "Daily wage : "<<wage;
    }
};
int main()
{
    labour e1;
    e1.getData();
    e1.display();
}