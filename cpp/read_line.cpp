// a program to read a line at a time 

#include<iostream>

#include<string>

using std::string;
using std::cin;
using std::cout;
using std::endl;


int main(){

    string sin;

    while(getline(cin,sin)){
        if(sin=="-1")
            break;
        cout<<sin<<endl;
    }

    return 0;
}

