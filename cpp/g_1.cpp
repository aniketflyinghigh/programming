#include<iostream>

int main()
{ for (int i=0; i<6;i++) {
    for(int j=0;j<4;j++){
    // this line introduces fixed width //
 
    std::cout.width(17);
    //std::left does the left alaignment
    // this could also be done using the cout<<setiosflag(ios::left) method
    std::cout<<std::left<<"Hello World!";
    }
    std::cout<<std::endl;
  }
  
  return 0;
}
