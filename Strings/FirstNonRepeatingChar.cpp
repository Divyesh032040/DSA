// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<unordered_map>
using namespace std;

char firstNonRepeatingChar (string str){
    int n = str.length();
    
    unordered_map<char,int>freq;
    
    //find freq
    for(char c : str){
        freq[c]++;
    }
    
    //find first non-repeating char
    for(char c : str){
        if(freq[c]==1){
            return c;
        }
    }
    return '-';
    
}

int main() {
    string str;
    cin>>str;
    
    char ans = firstNonRepeatingChar(str);
    
    cout<<ans;

    return 0;
}