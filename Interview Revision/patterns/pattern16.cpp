
#include <bits/stdc++.h> 
using namespace std;



int main() {
int n;
cin>>n;

for(int i=1;i<=n;i++){
    
    char c = 'A'+i-1;
   
    for(int ch = 1 ; ch <= i ; ch++){
       cout<<c;
    }
    cout<<endl;
}
return 0;
}


// A
// BB
// CCC
// DDDD
// EEEEE