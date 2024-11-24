#include <bits/stdc++.h> 
using namespace std;

int strLen(char arr[] ){
    int cnt = 0;
    for(int i=0; arr[i] != '\0' ;i++){
        cnt++;
    }
    return cnt;
}



int main() {

    char arr[20];
    cin>>arr;
    cout<< strLen(arr);


return 0;
}