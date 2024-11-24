
#include <bits/stdc++.h> 
using namespace std;

char toLowerCase (char c){

    if(c>='a' && c<='z')return c;

    else{
            char ch = c - 'A' + 'a';
            return ch;
        }
}

char toUpperCase(char c) {
    if(c >= 'A' && c <= 'Z') {
        return c;
    } else {
        char ch = c - 'a' + 'A';
        return ch;
    }
}



int main() {

    char a = 'H';
    cout<<character(a);


return 0;
}