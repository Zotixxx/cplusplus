#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

class String{
    string str;
    public:
        String(){
            str="";
        };
        String(string s){
            str= s;
        }
        String operator +(String t){
            // string temmp;
            return str+t.str;
            // return str.append(t.str);
        }
        void displayStr(){
            cout << str;
        }
};

int main (){
String str1("abc"),str2("def"),str3;
str3 = str1+str2;
    str3.displayStr();
}