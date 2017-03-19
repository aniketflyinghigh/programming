#include<iostream>
#include<string>
#include<typeinfo> // used to give the type of the variable
using namespace std;
int main(){
  // auto type deduction requires an intializer
  // the below code will give error if run without intializing a
  //  auto a = 0;
  
  // cin>> a;

  // COUT<< TYPEID(A).NAMEU<<endl;

  //string a( n, <stgin>)  repeat string n times
  string s (10,'a');
  cout<<s<<endl;

  string b ("hello"); // this should work but it does not
 
  int i {1};
  string c {'a'};
  return 0;
}
