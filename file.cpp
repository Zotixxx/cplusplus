#include<iostream>
#include <fstream>
using namespace std;
int main()
{
 string s = "THis is tet";
 ofstream out("testing.txt");   //writing into the file.
    out<<s;
ifstream read("reading.txt");
string st2;

read >> st2 ;            //reading file normallyy
getline(read,st2);      //reading the file using getline
cout <<st2;

 return 0;
}