
#include <bits/stdc++.h> 
using namespace std;

bool checkStringAreRotationOfEach(string str1 , string str2){

    string temp1 = str1;
    string temp2 = str2;
    sort(temp1.begin(),temp1.end());
    sort(temp2.begin(),temp2.end());

    if(temp1 != temp2){
        return false;
    }
    return true;

}



int main() {

    string str1 = "abcd";

    string str2 = "cdab";

    cout<<checkStringAreRotationOfEach(str1,str2);

return 0;
}