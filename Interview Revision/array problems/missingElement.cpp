#include <bits/stdc++.h>
using namespace std;

//METHOD ONE : using hash array    tc:O(n^2);
int missingElem(vector<int> &arr) {
    int n = arr.size(); // size is n, but numbers range from 1 to n+1
    vector<int> hasharr(n + 2, 0); // create frequency array of size n+2

    for (int it : arr) {
        hasharr[it]++;
    }

    for (int i = 1; i <= n + 1; i++) { // loop from 1 to n+1
        if (hasharr[i] == 0) {
            return i; // found the missing element
        }
    }

    return -1; // fallback, should not happen
}


//using XOR
// int xorFull = 1 ^ 2 ^ 3 ^ ... ^ n;
// int xorArr = arr[0] ^ arr[1] ^ ... ^ arr[n-2];
// missing = xorFull ^ xorArr;
//tc : O(n) sc: O(1)

int missing(vector<int>&arr){
    int n = arr.size()+1;
    int xorFull = 0;
    int xorArr = 0;

    for(int i=1;i<=n;i++){
        xorFull = xorFull^i;
    }

    for(int it:arr){
        xorArr = xorArr ^ it;
    }

    return xorFull ^ xorArr;
}


//classic method using formula of sum of first n number = n(n+1)/2;
//tc: O(n) , sc == O(1);

int missingOptimal(vector<int>&arr){
    int n = arr.size();
    int totalNumber = n+1;
    int sum=0;
    int totalSum = totalNumber*(totalNumber+1)/2;
    for(int it:arr){
        sum += it;
    }
    int missingElem = totalSum - sum;
    return missingElem;
}



int main() {
    vector<int> arr = {1, 2, 3, 4, 5}; // missing 6

    cout << "Missing element: " << missingOptimal(arr) << endl;

    return 0;
}
