#include<iostream>
#include<list>

using namespace std;
void display(list<int> &l){
    list <int > :: iterator  it;
    for(it= l.begin();it!=l.end();it++){
        cout << *it<< " ";
    }
    cout << endl;
}
int main()
{
 list<int> l1;          //List of length 0 
 list <int > l2(3);  
      //List of length 4
list <int > :: iterator itre = l2.begin();
*itre = 1;
itre++;
*itre = 90;
itre++;
*itre = 33;


l1.push_back(50);
l1.push_back(51);
l1.push_back(4);
l1.push_back(6);
l1.push_back(156);
list <int > :: iterator it = l1.begin();
// l1.insert(it,20);
display(l1);
// l1.pop_back();
// l1.remove(50);
// l1.sort();
// display(l1);
l1.sort();
l2.sort();
l1.merge(l2);
cout << "List 1 after merging"<< endl;
display (l1);
return 0;
}