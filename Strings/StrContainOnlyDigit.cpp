#include <iostream>
#include <string>
using namespace std;

bool containsOnlyDigits(string str) {
    for (char c : str) {
        // Check if the ASCII value is between '0' (48) and '9' (57)
        if (c < '0' || c > '9') {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    cin >> str;
    
    if (containsOnlyDigits(str)) {
        cout << "The string contains only digits.\n";
    } else {
        cout << "The string contains non-digit characters.\n";
    }

    return 0;
}
