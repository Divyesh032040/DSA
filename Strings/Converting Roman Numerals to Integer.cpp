#include <bits/stdc++.h>
using namespace std;

// This function returns value
// of a Roman symbol
int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;

    return -1;
}


int romanToDecimal (string str){
    int n = str.size();
   
    int res = 0;

    for(int i=0;i<n;i++){

        int s1 = value(str[i]);
        if( i+1 < n ){
            int s2 = value(str[i+1]);

            if(s1>=s2){
                res += s1;
                
            }else{
            res += (s2-s1) ;
            i++;
        }
        }else{
                res = res + s1;
            }
    }
    return res;
}



// Driver Code
int main()
{
    // Considering inputs given are valid
    string str = "MCMIV";
    cout << "Integer form of Roman Numeral is "
         << romanToDecimal(str) << endl;

    return 0;
}

/*
Step-by-Step Conversion of "MCMIV"
Initialization:

Start with res = 0.
Processing Each Character:

Character 1: 'M'
Value = 1000
Next character: 'C' (100)
Since 1000 (M) > 100 (C), add 1000 to res:
res = 0 + 1000 = 1000
Character 2: 'C'
Value = 100
Next character: 'M' (1000)
Since 100 (C) < 1000 (M), subtract 100 from 1000 and add to res:
res = 1000 + (1000 - 100) = 1000 + 900 = 1900
Character 3: 'M'
Value = 1000
Next character: 'I' (1)
Since 1000 (M) > 1 (I), add 1000 to res:
res = 1900 + 1000 = 2900 (This is where my previous explanation was wrong; let's correct this step)
res = 1900 remains unchanged.
Character 4: 'I'
Value = 1
Next character: 'V' (5)
Since 1 (I) < 5 (V), subtract 1 from 5 and add to res:
res = 1900 + (5 - 1) = 1900 + 4 = 1904
Final Result:
The correct final integer value of the Roman numeral "MCMIV" is 1904
*/