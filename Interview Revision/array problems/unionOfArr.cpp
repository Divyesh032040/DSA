
#include <bits/stdc++.h> 
using namespace std;

vector<int>unionOfArr(vector<int>& arr1 , vector<int> &arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();

    unordered_set<int>mySet;

    for(int it : arr1){
        mySet.insert(it);
    }
    for(int it: arr2){
        mySet.insert(it);
    }

    vector<int>ans;

    for(int it : mySet){
        ans.push_back(it);
    }

    return ans;

}


// optima approach using 2 pointers
vector<int> unionOptimal(vector<int>&arr1 , vector<int> &arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();

    int i = 0;
    int j = 0;

    vector<int>ans;

    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            if(ans.empty() || ans.back() != arr1[i])
                ans.push_back(arr1[i]);
            i++;
        }
        else if(arr2[j] < arr1[i]){
            if(ans.empty() || ans.back() != arr2[j])
                ans.push_back(arr2[j]);
            j++;
        }
        else { // arr1[i] == arr2[j]
            if(ans.empty() || ans.back() != arr1[i])
                ans.push_back(arr1[i]);
            i++;
            j++; // ✅ move both to avoid duplicates
        }
    }

    //after one are end
    while(i<n1){
        if( ans.size()==0 || ans.back() != arr1[i]){
            ans.push_back(arr1[i]);
        }
        i++;
    }
     while(j<n2){
        if( ans.size()==0 || ans.back() != arr2[j]){
            ans.push_back(arr2[j]);
        }
        j++;
    }

    return ans;
}

int main() {

    // vector<int>arr1 = {1,2,3,5,6};
    // vector<int>arr2= {1,2,3,4,5,8,9,7};

    vector<int>arr1 = {1,2,3,5,6};
    vector<int>arr2 = {1,2,3,4,5,8,9,7};

    vector<int>temp = unionOptimal(arr1,arr2);   // only for sorted arr



    for(int it : temp){
        cout<<it<<" ";
    }

return 0;
}


//approach : using set data structure time complexity :

//arr1[]=[3,4,5,3,5,6] and arr2[]=[3,4,5,6,7,8,8,10] than ans should be: [3,4,5,6,7,8,10]

//time complexity without sorting : O(n1+n2)
//time complexity with sorting : O( n1+n2 + n+m log n+m)
//space complexity sorting : O(n1+n2)

