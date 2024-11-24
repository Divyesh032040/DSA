// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

 struct treeNode {
        int data;
        treeNode* left ;
        treeNode* right ;
        
        treeNode(int data ){
            this->data = data;
            left = nullptr;
            right = nullptr;
            
        }
        
    };
    
int main() {
    //create a nodes
    treeNode* root = new treeNode(1);
    treeNode* node1 = new treeNode(2);
    treeNode* node2 = new treeNode(3);
    treeNode* node3 = new treeNode(4);
    treeNode* node4 = new treeNode(5);
    
    //linking node to form a tree
    root -> left = node1;
    root -> right = node2;
    node1 -> left = node3;
    node1 -> right = node4;
    

    //printing the output
cout << "Root: " << root->data << endl;
cout << "Left Child of Root: " << root->left->data << endl;
cout << "Right Child of Root: " << root->right->data << endl;
cout<< "left child of node1: " << node1->left->data<<endl;
cout<< "left child of node1: " << node1->right->data<<endl;
   
   
   //free memory 
    delete root;
    delete node1;
    delete node2;
    delete node3;
    delete node4;

    return 0;
}