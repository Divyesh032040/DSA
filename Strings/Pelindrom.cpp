// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;

    bool pelindrom (string str){
        int n = str.length();
        int left = 0;
        int right = n-1;
        
        while(left < right){
            if(str[left] == str[right]){
                left++;
                right--;
            }else {
                return false;
            }
        }
        return true;
    }
    
int main() {
    string str;
    cin>>str;
    
    bool ans = pelindrom(str);
    
    cout<<ans;

    return 0;
}