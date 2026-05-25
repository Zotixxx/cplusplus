#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    // fstream file; // First method
    // ofstream myfile("her.txt");
    // string text = "This is sahil";
    // myfile << text;
    // myfile.close();

    ifstream read("her.txt");

    string tempString;
    while(read.eof()==0){
    getline(read, tempString);
    cout << tempString<<endl;
    }


    // ofstream  writingdata;
    // writingdata.open("impLog.txt");
    // writingdata<<"Fuck off bro";
    return 0;
}