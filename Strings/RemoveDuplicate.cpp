// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include<set>
using namespace std;

void removeDuplicate (string &str){
    int n = str.length();
    if(n==1) {
        cout<<str[0];
        return;
    }
    set<char>mp;
    
    for( char c : str){
        mp.insert(c);
    }
    cout<<"after removed Duplicate given string is : ";
    for(char c : mp){
        cout<<c;
    }
}

int main() {
    string str = "s";
    removeDuplicate(str);

    return 0;
}