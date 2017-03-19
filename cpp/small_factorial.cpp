// Input: 0<n<101;
// output: fact(n)


#include<iostream>
#include<vector>
#define MAXSIZE 10 // defining the maxsize
using namespace std; 

int main(){
  std::vector <int> res (MAXSIZE);
  int num;
  // initialize vector to 0s as we don't want any garbage value to be multiplied with the final result
  for(vector<int>::size_type  i=0;i<MAXSIZE;i++)
    {
      res[i]=0;
    }
  // take the number
  cout<<"Enter the number"<<endl;
  cin>>num;
  // store the number in the array digit wise
  //take the remainder of the number
  int  rem =num%10;
  vector<int>::size_type  i= MAXSIZE;
  //while num is not 0, store that digit in array
  while(rem > 0)
    { res[i]=rem;
      num = num/10;
      rem =num%10;
       i--;
    }
  for(vector<int>::size_type  j=0;j<=MAXSIZE; j++)
    {
      cout<<res[j]<<endl;
    }
 

  return 0;
}
