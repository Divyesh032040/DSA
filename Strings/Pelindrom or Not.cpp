
#include<bits/stdc++.h>
using namespace  std;


//for string like abcba   TC: O(n)
int isPalindrome(string S){
	
	    int n = S.size();
	    int start = 0;
	    int end = n-1;
	    while(start<end){
	    if(S[start] != S[end]) return false;
	    start++;
	    end--;
	    }
	    return true;
}

//TIME C : O(n/2)

int isPalindrome(string S){
	    int n = S.size();
	    int start = 0;
	    int end = n-1;
	    for(int i=0;i<n/2;i++){
            if(S[i] != S[n-i-1]) return false;
          
        }
	    return true;
}



//for string like : "A man, a plan, a canal: Panama"
bool isPalindrome(string s ) {
        int n = s.length();
        int right = n-1;
        int left = 0;

        while(left<right){
            while(left<right && !isalnum(s[left])) left++;
            while(left<right && !isalnum(s[right])) right--;

            if(tolower(s[left]) != tolower(s[right])) return false;

            left++;
            right--;
        }
        return true;    
    }