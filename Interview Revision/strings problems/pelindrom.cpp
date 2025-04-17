#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string str){
    int n = str.length();
    int start = 0;
    int end = n-1;
    while(start < end){
        
        if(str[start] != str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main(){

    string str;
    getline(cin,str);

    cout<<checkPalindrome(str);




    return 0;
}