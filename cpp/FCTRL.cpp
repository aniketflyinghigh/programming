
#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
int trailing_zeros(int );
int main()
{

   int n,k;
   cin>>n;
   for(int i=0;i<n;i++)
   {
        cin>>k;
        int res = trailing_zeros(k);
        cout<<res<<endl;
    }

return 0;
}

/*  This function calculates the number of trailing zeros
    in a factorial of a given number

    100! = 1x2x3x4.....x100

    now that would mean that we need to calculate how many 10s are there
    so we calculate the factors of 5x2 but since the number of factors of 2
    is very large i'e every other number, we calculate the factors of 5

    100/5 = 20 so 20 factors of 5  20 trailing 0s
    but now we have to account for all those 5s which multiplies by themselves

    5x5 since they would count

*/
int trailing_zeros(int n)
{   int num_of_zeros=0;
    int ratio;
    int idx=1;
    while((ratio=n/pow(5,idx))>=1)
    {
        num_of_zeros = num_of_zeros+ratio ;
        idx++;
    }

return num_of_zeros;
}
