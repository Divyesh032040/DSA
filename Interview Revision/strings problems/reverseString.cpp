#include <bits/stdc++.h> 
using namespace std;

void swapElem(int i , int j , string &str){
    char tempChar = str[i];
    str[i] = str[j];
    str[j] = tempChar;
}

void reverseString(string &str){
    int n = str.length();
    int i = 0;
    int j = n - 1;

    while(i < j){
        swapElem(i, j, str);
        i++;
        j--;
    }
}

int main() {
    string str = "divyesh";
    reverseString(str);
    cout << str;
    return 0;
}

//reverse(str.begin(), str.end());
