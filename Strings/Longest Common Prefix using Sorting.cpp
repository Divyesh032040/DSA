#include <bits/stdc++.h> 
using namespace std;

string longestCommonPrefix(string str[] , int n){
    if(n==0) return "";
    if(n==1) return str[0];

    //sorting
    sort(str,str+n);

    int minLen = min(str[0].size(),str[n-1].size());

    string first = str[0];
    string last = str[n-1];

    int i = 0;
    string ans="";

    while(i<=minLen && first[i] == last[i]){
        ans.push_back(first[i]);
        i++;
    }
    return ans;
}



int main() {
    string str[]={"geeksforgeeks", "geeks", "geek", "geezer"};
    int n = sizeof(str) / sizeof(str[0]);

    cout<<"longest common prefix is :"<<longestCommonPrefix(str,n);
return 0;
}


/*
s1 : if n == 0 than return " " and if n == 1 return str[0];

s2: sort the given array of string / vector of string

s3: store the min size in variable by compare both first and last element of sorted arr

s4: run a while loop while i = 0 dont reach than min length and comp each words of both elem.

s4: store it into ans stirng of both elem are same.

and return it...

 */