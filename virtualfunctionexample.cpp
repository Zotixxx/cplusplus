#include<iostream>
using namespace std;
class CWH{
    string name;
    string category;
    public:
        virtual void display(){
            cout <<"Name: "<<name <<endl;
            cout <<"Category: "<<category<<endl;
        }
        CWH(string n,string c):name(n),category(c){}
};
class CWHVideo: public CWH{
    string title;
    int lenght;
    public:
        void display(){
            cout << "Lenght of video is : "<< lenght <<endl;
            cout << "Title of the video is : "<<title<<endl;
        }
        CWHVideo(string t, int l , string n,string c ):CWH(n,c), title(t),lenght(l){
            CWH::display();

        }

};
class CWHBlogs: public CWH{
    string title;
    int lenght;
    public:
        void display(){
            cout << "Lenght of BLog is : "<< lenght;
            cout << "Title of the Blog is : "<<title;
        }


};
int main()
{
 CWH * ptr_to_cwh;
 CWHVideo video1("THis is title of the videeo ",56,"CodeWIthHarry","Tech");  
 ptr_to_cwh =&video1;
 ptr_to_cwh->display();
// CWHVideo video2("THis is title of the videeo ",56,"CodeWIthHarry","Tech");
// video2.display();
//  return 0;
// }

//With virtual function we are able to use the methods of the derived class; without this by default it calls the mehtods of the base class

/*
1. Vitual fucntion can only be accessd using pointer variales
2. They Cannot be static
3. Virtual fucnction can be a  friend of another class
4. A virital function in base class may not be used 
5. Cannot be a constructor
6. Can be a destructor
*/