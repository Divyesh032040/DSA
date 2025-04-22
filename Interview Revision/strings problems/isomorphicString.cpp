#include <bits/stdc++.h> 
using namespace std;


bool isIsomorphic(const string &s1, const string &s2) {
    if (s1.length() != s2.length()) return false;

    unordered_map<char, char> mp1, mp2;

    for (int i = 0; i < s1.length(); ++i) {
        char c1 = s1[i];
        char c2 = s2[i];

        if (mp1.count(c1) == 0 && mp2.count(c2) == 0) {
            mp1[c1] = c2;
            mp2[c2] = c1;
        } else {
            if (mp1[c1] != c2 || mp2[c2] != c1) {
                return false;
            }
        }
    }

    return true;
}
int main() {

    cout << (isIsomorphic("aab", "xxy") ? "True" : "False") << endl;
return 0;
}