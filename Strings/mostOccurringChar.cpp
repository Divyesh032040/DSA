#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

char mostOccurrenceOfChar(string str){
    int n = str.length();
    if (n == 0) return '\0';
   
   unordered_map<char, int> mp;
    int maxCount = 0;
    char ansChar = '\0';

    for (int i = 0; i < n; i++) {
        mp[str[i]]++;
        if (mp[str[i]] > maxCount) {
            maxCount = mp[str[i]];
            ansChar = str[i];
        }
    }
     if (maxCount == 1) {
        return '0'; // No character occurs more than once
    }
     return ansChar;
}

int main(){

    string str = "abcdeeeefg";

    char ans = mostOccurrenceOfChar(str);

    cout<<ans;

    return 0;
}


