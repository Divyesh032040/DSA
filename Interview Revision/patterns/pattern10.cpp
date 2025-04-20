
#include <bits/stdc++.h> 
using namespace std;

void upperTriangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void lowerTriangle(int m){
    int n = m-1;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}



int main() {

    int n;
    cin>>n;
    upperTriangle(n);
    lowerTriangle(n);
return 0;
}