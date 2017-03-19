#include<iostream>
// this is the google tutorial example 2
using namespace std;
int main()
{
  int input_var =0;
  do{
    cout<<"Enter a number (-1 to quit)"<< endl;
    if(!(cin>> input_var))
      { cin.ignore();
	cout<<"you entered a non numeric .... Exiting"<<endl;
      }
    if(input_var!= -1){
      cout<<"you entered" << " " << input_var<< endl;}
    break;
  }while(input_var!= -1);
  cout << "all done"<<endl;

  return 0;
  
    
}

