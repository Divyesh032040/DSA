
#include <bits/stdc++.h> 
using namespace std;

bool print_subSequences_with_sum_k(int idx , int arr[] , vector<int> &ds , int sum , int s , int n ){
    //base case
    if(idx == n){
        if(s == sum){
            for(int it : ds){
                cout<<it<<" ";
            }
            cout<<endl;
            return true;
        }else {
            return false;
        }
    }
    //take and non take approach with extra parameter s (sum of all elem of sequences)
    ds.push_back(arr[idx]);
    s += arr[idx];
    if(print_subSequences_with_sum_k(idx+1,arr,ds,sum,s,n) == true){
        return true;
    }

    ds.pop_back();
    s -= arr[idx];
    if(print_subSequences_with_sum_k(idx+1,arr,ds,sum,s,n)==true){
        return true;
    }
    return false;
}

int main() {

int n = 3;
int arr[] = {1,2,1};
int sum = 2;
vector<int>ds;
int idx = 0;
int s = 0;

print_subSequences_with_sum_k(idx,arr,ds,sum,s,n);

return 0;
}


/*
To print only the first subsequence whose sum equals k, we modify the approach slightly. The function is changed to return a boolean. In the base case, if the sum equals k, we print the subsequence and return true. Otherwise, return false. During recursion, if any recursive call (either "take" or "not take") returns true, it means we’ve already found the desired subsequence, so we stop further recursion and return true. This ensures we only find and print the first valid subsequence without unnecessary computations.
*/