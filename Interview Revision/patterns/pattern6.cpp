#include<iostream>
using namespace std;

int main (){

    for(int i=1;i<=5;i++){
        int count = 1;
        for(int j = i ; j<= 5 ; j++){
            cout<<count;
            count++;
        }
        cout<<endl;
}
    return 0;
}


// 12345
// 1234
// 123
// 12
// 1