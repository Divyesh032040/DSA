#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

bool rotationOfString(string str1 , string str2) {
   int n1 = str1.length();
   int n2 = str2.length();
   
   if(n1 != n2) return false;
   
   string temp = str1+str1;
   
     size_t position = temp.find(str2);
     return position != string::npos;
         
}

int main() {
    string str1 = "abcd";
    string str2 = "cdab";
    cout<<rotationOfString(str1,str2);

    return 0;
}

/*
temp.find(str2): This function searches for the substring str2 within the string temp.
If str2 is found, find() returns the index (position) where str2 starts in temp.
If str2 is not found, find() returns string::npos

If position is not equal to string::npos, it means str2 was found in temp, so the function returns true.
If position is equal to string::npos, it means str2 was not found, so the function returns false.

In C++, string::npos is a special constant used with the std::string class to indicate that a particular search or operation did not find what it was looking for. It’s a constant value that signifies "not found" or an invalid position.
*/
