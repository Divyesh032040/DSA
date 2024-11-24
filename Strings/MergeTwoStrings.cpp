#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <string> 
#include <map>
#include <set> 
#include <bits/stdc++.h> 
using namespace std;

string mergeStrings (string str1 , string str2){
    int n = str1.length();
    int m = str2.length();

    string ans;

    int i = 0;
    int j = 0;

    while(i<=n || j<=m){
        ans += str1[i];
        ans += str2[j];
        i++;
        j++;
    }
   while(i<n){
        ans += str1[i];
    }
    while(i<m){
        ans += str2[j];
    }
    
    
   
    return ans;
}



int main() {

    string str1 = "ABCD";
    string str2 = "EFGHIJK";

    string ans = mergeStrings(str1,str2);
    
    for(int i=0;i<ans.length();i++){
        cout<<ans[i];
    }


return 0;
}