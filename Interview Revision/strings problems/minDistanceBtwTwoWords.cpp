
#include <bits/stdc++.h> 
using namespace std;

int minDistanceBetweenTwoWords (vector<string>str , string word1 , string word2){
    int n = str.size();

    int d1 = -1;
    int d2 = -1;

    int ans = INT_MAX;

    for(int i =0;i<n;i++){
        if(str[i] == word1){
            d1 = i;
        }else if(str[i] == word2){
            d2 = i;
        }else if(d1 != -1 && d2 != -1){
            ans = min(ans,abs(d1-d2));
        }
    }
    return ans;
}



int main() {


    vector<string> S = { "the", "quick", "brown", "fox", "quick" };

    string word1 = "the";
    string word2 = "fox";

    cout << minDistanceBetweenTwoWords(S, word1, word2);


return 0;
}