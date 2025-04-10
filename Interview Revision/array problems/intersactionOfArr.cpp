
#include <bits/stdc++.h> 
using namespace std;

vector<int>interSactionBruteForce(vector<int>& arr1 , vector<int>& arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();

    vector<int>ans;

    for(int i=0;i<n1;i++){
        for(int j = 0; j<n2 ; j++){
            if(arr2[j] == arr1[i]){
                ans.push_back(arr2[j]);
            }
        }
    }
    return ans;
}

vector<int>interSectionOptimal(vector<int>& arr1 , vector<int>& arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();

    
}


int main() {

    vector<int>arr1 = {1,2,3,4,5};
    vector<int>arr2 = {3,4,5,6,6,7};

    vector<int>result = interSactionBruteForce(arr1 , arr2);

    for(int it : result){
        cout<<it<<" ";
    }

    

return 0;
}