#include<iostream>
using namespace std;
int main(){
  cout <<"\t1\t2\t3\t4\t5\t6\t7\t8\t9"<<endl<<" "<<endl;

  for (int i =1; i<10; i++){
    cout<<i<<"|\t";
    for (int c=1; c<10;c++){
      cout<< i*c <<"\t";
    }
    cout <<endl;
  }

  return 0;
}
