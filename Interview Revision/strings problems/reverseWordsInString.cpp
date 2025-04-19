
#include <bits/stdc++.h>
using namespace std;

//approach 1
string reverseWords(string & s){
    int n = s.length();
    vector<string>str;
    stringstream ss(s);
    string word;

    while(getline(ss,word,'.')){
    str.push_back(word);
    }

    int m = str.size();
    int i=0;
    int j = m-1;

    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }

    string ans;
    for(int i=0;i<m;i++){
        ans += str[i];
        if( i != 0){
            ans += '.';
        }
    }

    return ans;

}


//approach 2 using stack 
string reverseStringUsingStack(string str){
    int n = str.length();

    stack<string>st;
    string word = "";

    //put each word of string into a stack sep by .
    for(int i=0;i<n;i++){
        if(str[i] != '.'){
            word += str[i];
        }
        else if(!word.empty()){
            st.push(word);
            word = "";
        }
    }

    //put last word if any
    if(!word.empty()){
        st.push(word);
        word = "";
    }

    //get all words from stack to string for build a reverse string

    while(!st.empty()){
        word += st.top();
        st.pop();
        if(!st.empty()){
            word += '.';
        }
    }

    return word;

}




int main(){

    string s = "..i..love.coding.";
    cout << reverseStringUsingStack(s) << endl;     //coding.love.i
    return 0;

    return 0;
}

//approach 1 : split str into a arr of words , than reverse arr -> rejoin each words of array
//approach 1 : tc : O(n) space complexity : O(n)
//approach 2 : use stack , put all words in stack and than get all words from tack and make a reverse string
