// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;

bool isAnagram (string str1 , string str2){
    int n1 = str1.length();
    int n2 = str2.length();
   
    if(n1 != n1) return false;
    
    int count[256] = {0};
    
    // for(int i=0;i<n1;i++){
    //     count[str1[i]]++;
    // }
    for( char c : str1){
        count[c]++;
    }
    
    // for(int i=0;i<n2;i++){
    //     count[str2[i]]--;
        
    for( char c : str2){
       count[c]--;
    
    if(count[c] < 0){
        return false;
      }
    }
    return true;
    
}


int main() {
    
    string str1 = "abcd";
    string str2 = "bdac";
    
    bool ans = isAnagram(str1,str2);
    
    if(ans == 1){
        cout<<ans<<" your given string is Anagram"<<endl;
    }else cout<<ans<<" your given string is not Anagram"<<endl;
    
   
   

    return 0;
}