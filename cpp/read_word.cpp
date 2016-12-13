#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main(){
    string s1;
    while(cin>>s1){
        if(s1=="-1"){
            break;}
        cout<<s1<<endl;
    }
        return 0;

}
