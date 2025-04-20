
#include <bits/stdc++.h> 
using namespace std;





int main() {
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        
        for(int j=1;j<= ((n*2)-(i*2)+1);j++){
            cout<<"*";
        }
        
        for(int l=1;l<=i-1;l++){
            cout<<" ";
        }
        cout<<endl;
    }

  


return 0;
}


//formula : ((n*2)-(i*2)+1) => 2n=2i+1 => 2(n-i)+1


// *********
//  ******* 
//   *****  
//    ***   
//     *    