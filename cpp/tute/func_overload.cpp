/* There is a facility to have different functions with same name b
   but differernt return type and different parameters (either different type or
   different in number of params), in same class/module.
   This is called overloading (function overloading) -
   for example if we have an object of type bike
   and an object of type car and we want a function to color them
   then we could have two functions
    a. car color( car )
    b. bike color(bike)
    a takes a car type object and colours it and returns a car where as b does
    the same with bike.

    This is a toy example of overloading

*/
#include <iostream>
#include <math.h>

int add( int m ,int n);

float add(float m , float n);

int add (int m, int n)
{
  return m+n;
}

float add(float m, float n)
{
  return m+n;
}

/*
The above functions are overloaded, but there could be a possiblity that we might
want to add objects other then int and double, which with overloading would mean
that we write a different function for each object type.
That is not a good way, the better way is to use tamplate in c++
this allows us to deal with objects in general

overloading is better when there are very few cases.

Overloading is a kind of polymorphic behaviour. like carbon.

*/
//template < class T>
template < typename T>

T multi (T a, T b )
{
  return a*b;
}

/*
The next type of template has more then one template parameters

*/

//calculate the integer power of a given numral :
// toy example so we are considering only ints and floats

template < class T , class N>
int power( T a ,  N n)
{
  return pow(a , n);
}


int main()
{
  float a, b;
  int i, j;
  i =2 ; j =3;
  a =4.0; b =6.5;

  auto result = multi<int>(i,j);   // this is template instantiation
  auto result2 = multi<float>(a,b);

  int res = power <int, int> (3, 3);  // here the explicit instantiation of type T is
  // nessecery since there are mixed args.
  std::cout << res<< ": This is the result of power"<<std::endl;
  std::cout<<result<<":  this is integer addition"<<std::endl;
  std::cout<<result2<<":  this is floating point addtion"<<std::endl;

  return 0;

}
