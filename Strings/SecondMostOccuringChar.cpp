#include<iostream>
#include<string>
#define NO_OF_CHAR 256

using namespace std;

char secondMostChar(string str){
    int n = str.length();
    char first;
    char second;

    int freqArr[NO_OF_CHAR] = {0};

    for(int i=0;i<n;i++){
        freqArr[str[i]]++;
    }
    for(int i=0;i<NO_OF_CHAR;i++){
        if(arr[i]>first){
            second = first;
            first = second;
        }else if (arr[i]>second && arr[i]<=first){
            second = arr[i];
        }
    }
    return second;
}

int main(){

    string str = "abcbadae";    //a=3 , b = 2
    char secondMost = secondMostChar(str);
    cout<<secondMost;


    return 0;
}
