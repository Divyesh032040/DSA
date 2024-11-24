// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;

class student {
    string accountNumber; 
public:
//  student (){
//      cout<<"default constructor called"<<endl;
//  }
 
    student (string name , int age , int Class){
       (*this).name = name;   //this->name = name;
        this->age = age;
        this->Class = Class;
    }
    
    //constructor overloading
     student (string name , int age){
        this->name = name;     //(*this).name = name;
        this->age = age;
       
    }
    string name ;
    int age;
    int Class;
    
    void getInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<Class<<endl;                                             
    }
    
    string getAccount(){
        return accountNumber;
    }
    
    void setAccount(string accountNumber){
        this->accountNumber = accountNumber ;
    }
};

int main() {
    
    student s1("divyesh" , 21 , 12);
    //student s1;
    
//  s1.name = "dev";
//  s1.age = 21;
//  s1.Class = 32; 
  
    
  cout<<  s1.name <<endl;;
  cout<<  s1.age <<endl;;
  cout<<  s1.Class <<endl; 
  
  
  s1.setAccount("3423423jvvi");
  
  cout<<"account no :"<<s1.getAccount();
   
    return 0;
}