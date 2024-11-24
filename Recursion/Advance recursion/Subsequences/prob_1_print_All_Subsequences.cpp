#include <bits/stdc++.h> 
using namespace std;

void subSequences( int arr[] , vector<int>& ds , int n , int idx){
    //basecase
    if(idx == n){
        for(int it : ds){
            cout<<it;
        }
        cout<<endl;
        return;
    }
    //take or pick particular  index on sequence
    ds.push_back(arr[idx]);
    subSequences(arr,ds,n,idx+1);
    ds.pop_back();
    //do not take condition , particular  index is not added in sequence 
    subSequences(arr,ds,n,idx+1);
}


int main() {
    int arr[] = {1,2,3};
    int n = 3;
    vector<int>ds;
    subSequences(arr,ds,n,0);

return 0;
}

/*
time complexity : O(n!)
space complexity : O(n) because depth of recursion is n in stack to ttrack of recursion 
Key Points about Subsequences:
The order of elements in the subsequence must be the same as in the original sequence.
Elements do not have to be contiguous in the original sequence.
Every sequence is a subsequence of itself, and the empty sequence is a subsequence of every sequence.
total number of subsequences : 2^n
*/