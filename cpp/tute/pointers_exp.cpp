/*
Pointers are the variables which store the address of another variables
they are said to point to a variable
Address of operator (&)
  the in memory address of any variable/object  could be  found using
  this operator
Derefrencing operator (*)
  this operator used to access the variable which the pointer points to.


Arrays and Pointers
  int a[10];  the [] are known as offset operator
  now if a is passed to any function then it is the pointer to the base address
  of array that would be passed

  int *p1;

  p1 = a; // now p1 points to base address of array

  a=p1 ; this is not valid as 'a' can't point to anything other then the same 10 
  blocks of int.
  pointers can be intialized by an address of another variable or a value of
  different pointer.


  Pointer Arithmetic
    only addition and subtraction are the valid operations

    and each operation manuplates the pointer variable with the size of
    data

    *p++   // same as *(p++): increment pointer, and dereference unincremented address
    *++p   // same as *(++p): increment pointer, and dereference incremented address
    ++*p   // same as ++(*p): dereference pointer, and increment the value it points to
    (*p)++ // dereference pointer, and post-increment the value it points to

Pointer and const ... read again



  */

#include<iostream>

int main()
{
  int a =3;
  int *p_int; // this syntex says that p_int is a pointer which holds the
  //address of an object whose type is int
  p_int = &a; // now we store address of a in p_int.
  std::cout<< p_int << " : this is the address of a i.e. value of p_int" << std::endl;
  std::cout<< &p_int<< " : this is the address of p_int" << std::endl;
  std::cout<< *p_int<< " : this is the  result of *p_int read as value at address in pointer"<<std::endl;
  std::cout<< a << " : this is the value of a and *p_int"<<std::endl;

  int **p_p_int;

  int
  return 0;
}//end main
