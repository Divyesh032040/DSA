#include <bits/stdc++.h> 
using namespace std;

void print_subSequences_with_sum_k(int idx , int arr[] , vector<int> &ds , int sum , int s , int n ){
    //base case
    if(idx == n){
        if(s == sum){
            for(int it : ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    //take and non take approach with extra parameter s (sum of all elem of sequences)
    ds.push_back(arr[idx]);
    s += arr[idx];
    print_subSequences_with_sum_k(idx+1,arr,ds,sum,s,n);

    ds.pop_back();
    s -= arr[idx];
    print_subSequences_with_sum_k(idx+1,arr,ds,sum,s,n);
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