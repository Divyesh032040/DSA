#include <bits/stdc++.h> 
using namespace std;



int main() {

    string str = "abcdefg";

    //accessing elements 2 ways : str[]  , str.at();
    cout<<str[2];   //c
    cout<<str.at(2);   //c

    //find length of string 
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;

   string abc;  
   getline(cin,abc); //this will cin complete string , where cin>> only take till first space

return 0;
}