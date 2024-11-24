#include <bits/stdc++.h> 
using namespace std;

int reverse(char arr[] , int n ){
    int s = 1;
    int e = n-1;
    while(s<=e){
    swap(arr[s++],arr[e--]);
    }
}
/*
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int st = 0;
        int e = n-1;
        while(st<e){
        swap(s[st],s[e]);
        st++;
        e--;
        }
    }
};
*/



int main() {

    char arr[20];
    cin>>arr;
    cout<< strLen(arr);


return 0;
}