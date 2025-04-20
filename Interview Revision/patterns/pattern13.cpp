
#include <bits/stdc++.h> 
using namespace std;

void butterflyWithNum(int n){
    for (int i = 1; i <= n; i++){

        //side1
        int number1 = 1;
        for(int j=1;j<=i;j++){
            cout<<number1;
            number1++;
        }
        //holes
        for(int k=2;k<=2*(n-i);k++){
            cout<<"*";
        }

        //side2
        int number2 = i;
        for(int j=1;j<=i;j++){
            cout<<number2;
            number2--;
        }
        
        cout<<endl;

    }
    
}



int main() {
    
    int n;
    cin>>n;
    butterflyWithNum(n);
    


return 0;
}



// 1         1
// 12       21
// 123     321
// 1234   4321
// 12345 54321
// 123456654321
