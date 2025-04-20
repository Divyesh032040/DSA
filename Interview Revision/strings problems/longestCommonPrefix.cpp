
#include <bits/stdc++.h> 
using namespace std;

string longestCommonPrefix(vector<string>str){
    int n = str.size();

    //sort the given array of words
    sort(str.begin() , str.end());

    //pick a first and last words
    string word1 = str[0];

    string word2 = str[n-1];

    string ans = "";

    int i = 0;
    int j = 0;

    while( i < word1.size()){
        while(word1[i] == word2[j]){
            ans += word1[i];
            i++;
            j++;
        }
        if(word1[i] != word2[j]){
            break;
        }
    }
    return ans;

}


int main() {

    vector<string> str = {"geeksforgeeks", "geeks", "geek", "geezer"};

    string ans = longestCommonPrefix(str);

    cout<<ans<<endl;

return 0;
}


//tc : n log n 