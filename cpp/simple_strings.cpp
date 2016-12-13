#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::cin;
using std::endl;
int main(){
    
    cout<<"enter a string"<<endl;
    string s1; // init an empty string
    cin>>s1;
   string s2= " the string you entered is: " + s1+"\n";
    cout<<s2;

    string s3= "sello" +  s2+ ",";
    return 0;
}
