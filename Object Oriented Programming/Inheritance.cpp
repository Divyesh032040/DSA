#include <bits/stdc++.h> 
using namespace std;

class person {
public:
string name ;
int age;

person(string name , int age){
    this -> name = name ;
    this -> age = age;
}

};

class student : public person {
public:
int rollNo;

student(string name , int age , int rollNo){
    this -> name = name ;
    this -> age = age ;
    this -> rollNo = rollNo;
}

void getInfo (){
    cout<<"name "<<name<<endl;
    cout<<"rollNo "<<rollNo<<endl;
    cout<<"age "<<age<<endl;
}

};


int main() {
    student s1("divyesh",21,6);

    s1.getInfo();





return 0;
}