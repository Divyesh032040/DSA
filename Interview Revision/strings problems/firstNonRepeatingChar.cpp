
#include <bits/stdc++.h> 
using namespace std;

char firstNonRepeatingChar(string str){
    int n = str.size();

    //frq array for a to z
    char arr[26] = {0}; //init with zero

    for(int i=0;i<n;i++){
        arr[str[i] -'a']++;
    }
    
    int ans;
    for(int i = 0; i<n ; i++){
        if(arr[str[i] - 'a'] == 1){
            return str[i];
        }
    }
    return '-';
}



int main() {

    string str = "geeksforgeeks";

    char ans = firstNonRepeatingChar(str);

    cout<<ans<<endl;


return 0;
}