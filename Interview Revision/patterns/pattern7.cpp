
#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin>>n;

  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int k=1;k<=i*2-1;k++){
        cout<<"*";
    }
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    cout<<endl;
  }


return 0;
}


// n = 5

//     *    
//    ***   
//   *****  
//  ******* 
// *********