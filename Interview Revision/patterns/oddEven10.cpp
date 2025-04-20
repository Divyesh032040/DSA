
#include <bits/stdc++.h> 
using namespace std;
int main() {

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        int number = ( i%2 == 2 ? 0 : 1);

        for(int j=1;j<=i;j++){
            cout<<number;
            number = 1 - number;
        }

        cout<<endl;
    }


return 0;
}


// 1
// 10
// 101
// 1010
// 10101
// 101010
// 1010101