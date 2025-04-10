
// #include <bits/stdc++.h>
// using namespace std;

// int nCr(int n, int r)
// {
//     long long res = 1;

//     // calculating nCr:
//     for (int i = 0; i < r; i++)
//     {
//         res = res * (n - i);
//         res = res / (i + 1);
//     }
//     return res;
// }

// void pascalTriangle(int n)
// {
//     // printing the entire row n:
//     for (int c = 1; c <= n; c++)
//     {
//         cout << nCr(n - 1, c - 1) << " ";
//     }
// }

// int main()
// {
//     int n = 5;
//     pascalTriangle(n);
//     return 0;
// }





#include <iostream>
using namespace std;
int fectorial(int n){
    if(n==0){
        return 1;
    }
    return n*fectorial(n-1);
}

int ncr(int n , int i){

    int row = n-1;
    int elem = i-1;
    
    int nminr = row-elem;
    
    int nfec = fectorial(row);
    int rfec = fectorial(elem);
    int nminrfec = fectorial(nminr);
    
    int ans = nfec/(rfec*nminrfec);
    
    return ans;
}
int main(){
    
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        int elem = ncr(n,i);
        cout<<elem<<" ";
    }


    return 0;
}




//optimized method for print row of pascle tringle in n  complexity

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     int coeff = 1;
//     for (int i = 0; i < n; i++) {
//         cout << coeff << " ";
//         coeff = coeff * (n - i - 1) / (i + 1);
//     }
    
//     return 0;
// }