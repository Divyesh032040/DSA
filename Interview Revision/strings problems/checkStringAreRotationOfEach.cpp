
#include <bits/stdc++.h> 
using namespace std;

bool checkStringAreRotationOfEach(string str1 , string str2){
        if (str1.length() != str2.length()) return false;

        string temp = str1 + str1;

        return temp.find(str2) != string::npos;
}



bool checkStringAreRotationOfEachOptimal(string str1 , string str2){

    string temp = str1+str1;
    int n = temp.length();

    bool ans = temp.find(str2);

    return bool;


}



int main() {

    string str1 = "abcd";

    string str2 = "cdab";

    cout<<checkStringAreRotationOfEachOptimal(str1,str2);

return 0;
}