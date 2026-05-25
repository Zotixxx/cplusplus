#include<iostream>
#include<map>
using namespace std;
int main()
{
 map < string , int> map1;
 map1["Sahil"] =98;
 map1["Rohit"]= 15;
 map <string , int > ::iterator itr= map1.begin();
 cout <<(*itr).first <<" got "<< (*itr).second<< " marks";

 return 0;
}