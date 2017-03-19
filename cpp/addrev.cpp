// reverse an int
//there are no trailing zero in reversed number
// 42   24 
// 12000 21 
// 1200  21


#include<iostream>
#include<vector>
#include<string>
#include<math.h>
int rev_num(int);

int main(){
    int res1 = rev_num(5);
    int res2= rev_num(239);

    std::cout<<res1<<std::endl;

    std::cout<<res2<<std::endl;
    return 0;
}
// how is a number formed: 
// 1200  is 10^3+2*10^2+0*10^1+0*10^0
// 0021  is 0*10^3 + 0*10^2 +2*10^1+1*10^0
int rev_num(int n)
{
    int res =0;
    int place=0;
    int quo=n/10;
    int rem = n%10;
    //could I do this in a ssingle loop
    // fist get the number of total places 
    // then revrse the number
    while(quo>0)
    {     
       place++;
       quo=quo/10; 
     }
    
    for(int i=place;i>=0;i--)
    {
       int temp = n%10;
       res=res+temp* pow(10,i);
       n=n/10;
    }
return res;
}   

