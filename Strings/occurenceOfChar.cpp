
#include <iostream>
#include <string>
using namespace std;

int occurrence (string str , char k){
    int n = str.length();
    int ans = 0;
    for(int i=0;i<n;i++){
        if(str[i]==k){
            ans++;
        }
    }
    return ans;
}
int main() {
    
    string str;
    char k;
    cin>>str;
    cin>>k;
    int ans = occurrence(str , k);
    
    cout<<ans;

    return 0;
}