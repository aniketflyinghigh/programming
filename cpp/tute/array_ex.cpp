/*
Arrays give the facility to store objects in contegious memory location.

type name [size ] { init values}
the size of an array is always constant and has to be known at the compile time.
int a [] {1,2,3}
this would intialize the array with a[0] =1 a[1]=2
a[2]=3
int a[] {}  this would intialize the a to zeros for fundamental types.
int a[ 10];
if the array above is declared  directly in a namespace or is static then it is
intialized by default but if it is declared in local scope and not explicitly intialized
then it might contain any garbage value ( similer to any variable )

Multidimesional arrays:
int b [] [][]
For multidimension array the storage complexity increases exponentially:


Arrays as a parameter

int procedure(int a[]) this is a function which requires an array to operate on

int a[10]{}

procedure(a) .. this passes the first address of array to the function
arrays are passes as refferenc
in the above the reffernce

the arrays are language implimented

c++ also provides container arrays

they are better
used by #include<array>

they allow copy and decay into pointer when told to be so.


*/

#include<iostream>
#include<vector>
#define MAX 100

//void insertion_sort(int a[]);
int linear_search(int a[], int n);
int main()
{  const int size = MAX;
  // init an array
  int a [size] ={};

  for(int i =0 ; i<size;i++)
  {
      a[i]= i%size;
      std::cout<<a[i]<<" ";
  }
  std::cout<<std::endl;

int result = linear_search(a,10);

std::cout<< result<< std::endl;
return 0;
} //end main

int linear_search(int a[] , int n)
{ // an implimentation of binery search


  for(int i =0; i<MAX;i++ )
  {
    if (a[i]==n)
    {
      return i;
    }
  }
  return -1;

}
