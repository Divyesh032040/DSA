
#include <bits/stdc++.h> 
using namespace std;


int equalPointsOfBrackets(string str){
    int n = str.length();
    

    for(int i=0;i<n;i++){
        int opening = 0;
        int closing = 0;
        for(int j = 0 ; j < i ; j++){
            if(str[j] == '('){
                opening++;
            }
        }
        for(int j = i ; j < n ; j++){
            if(str[j] == ')'){
                closing++;
            }
        }
        if(opening == closing){
            return i;
        }
    }
    return -1;
}



int main() {

 string str = "(())))(";
    cout << equalPointsOfBrackets(str) << endl;  
    return 0;
}