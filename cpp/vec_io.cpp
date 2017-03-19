#include<iostream>
#include<vector> // we are including vectors here




int premitive_search (std::vector <int> &a, int b)
{
  for(int i=0; i<  a.size(); i++)
    {   
        if( a[i] == b)
        { return i;
        }
    }
    return -1;
}

int main ()
{
  std::vector <int> vec (10);
  std::vector<int>::size_type sz = vec.size();
  // intialize the vector
  for(int i =0;i<sz;i++)
    {
        vec[i]=i;
    }
 int result = premitive_search (vec , 11);
 
 std::cout<<result<<std::endl;

 result = premitive_search (vec , 9);
 std::cout<<result<<std::endl;
 return 0;
}
