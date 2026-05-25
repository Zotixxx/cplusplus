#include<iostream>
#include<vector>

using namespace std;

void display(const vector<int> &vec){
    int i;
    for (i=0;i<vec.size();i++){
        cout << "Value of " << i << "th element is " << vec[i] << endl;
    }
};
int main()
{
vector <int> vect1;     //Zero lenght integar vector
vector <char> vect1(5);     //5 lenght Character  vector
// int i = 3;
    int element;
    // int *sizee = new int (3);
    for(int i = 0;i<2;i++){
        cout <<" Enter value of Vecotr " ;
        cin>>element;
        vect1.push_back(element);
    }
    // display(vect1);
  std::cout << "size: " << vect1.size() << "\n";
  std::cout << "capacity: " << vect1.capacity() << "\n";
  std::cout << "max_size: " << vect1.max_size() << "\n";
  vector <int > :: iterator itr = vect1.begin();
  display(vect1);
  cout <<endl;
  vect1.insert(itr,20, 5555);
  display(vect1);
  vect1.clear();
  cout << "Cleared";
  display(vect1);
 return 0;
}