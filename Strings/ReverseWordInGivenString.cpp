
#include <bits/stdc++.h> 
using namespace std;

void reverseWords (string s ){
    int n = s.length();

    if (n==1) cout<<s[0];
  
    //temp vector for store words
    string str = "";
    vector<string> ans ;

    for(int i=0;i<n;i++){
        if(s[i] == ' '){
            ans.push_back(str);
            str = "";
        }else{
            str += s[i];
        }
    }
    ans.push_back(str);

    //ans = ["i" ,  "like" ,  "this" ,  "program" ,  "very" ,  "much"];

    for(int i=ans.size() - 1 ; i>0 ; i--){
        cout<<ans[i]<<" "; 
    }
    cout<<ans[0];
}



int main(){
    string s = "i like this program very much";
    reverseWords(s);
    return 0;
}
