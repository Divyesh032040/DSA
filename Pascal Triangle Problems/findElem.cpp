/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int fectorial(int n){
    if(n==0){
        return 1;
    }
    return n*fectorial(n-1);
}
int main(){
    
    int n;
    cout<<"entern row num"<<endl;
    cin>>n;
    
    int r;
    cout<<"enter elem num"<<endl;
    cin>>r;
    
    int p = n-r;
    
    
    int nfec = fectorial(n-1);
    int rfec = fectorial(r-1);
    int nminr = fectorial(p);
    
    int ans = nfec / (rfec * (nminr));
    
    cout<<ans<<endl;
    
    

    return 0;
}