// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;

bool isWolve (char c){
    char ch = tolower(c);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return true ;
    }
 return false;
}

int main() {
    
    string str;
    int vowels = 0, consonants = 0;
    //cin>>str;  this will only take string till first space
    getline(cin,str);  //this will take complete string
    int ptr = 0;
    for(char ch : str){
        if(isalpha(ch)){
            if(isWolve(ch)){
                vowels++;
            }else{
                consonants++;
            }
        }
    }
    cout<<"vowels : "<<vowels<<endl;
    cout<<"consonants : "<<consonants<<endl;

    return 0;
}