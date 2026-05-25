#include<iostream>
using namespace std;
/*

template <class T>
class checkMax{
    T x ,y;
    public: 
    checkMax(T x,T y){
        this->x= x;
        this->y = y;    

        y = this->y;
        checkMax::check();
    }
    void check(){
        if(x>y){
            cout<<"X is greater"<< x;
            

        }else{
            cout <<"Y is greater"<< y;
        }
    }
};
int main()
{
 checkMax<float> num1(7.5,7.59);
 return 0;
}

*/
// Template  with multiple parameter
/*
template < class t1 , clas t2>      // Here at the t1 and t2 we can also give teh name of class and wee can use that as a variable
//WE can also give teh default data type for the template vairables using '=' .
classname{
    //body
}
*/

template <class t1= int, class t2=string >
class display{
    private:
        t1 number;
        t2 name;
    public:

    display(t1 n, t2 s){
        number= n;
        name= s;
    }
    void show();
};
//THis is how we can define the function defination outside the class which uses templates
template <class t1,class t2>        // No need to write the default data type here
void display<t1,t2>:: show(){
        cout << number<<endl;
        cout << name<< endl;        
        }

/* First method for funtion template , we can also use class template mthod for fucntion template*/
template <typename t1, typename t2>     //using function method for function template
void greet ( t1 name, t2 age){
    cout << "Hi my name is"<< name<< "and i am "<< age << "years old";
}

template < class t1, class t2>      // USing class method for function template
void greeting(t1 name, t2 age){
    cout << "Hi my name is"<< name<< "and i am "<< age << "years old";
}
int main (){
    // display<float,char> d1(4.5,'C');
    // d1.show();

    // // greet("Sahil", 19);
    // greeting<string, int >("Sahil", 20);

    display<string , int> d2("Rajiv talwar",45);
    d2.show();
     
}

