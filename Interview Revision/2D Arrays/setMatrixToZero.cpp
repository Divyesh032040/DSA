
#include <bits/stdc++.h> 
using namespace std;

void setMatrixToZero(vector<vector<int>> &matrix){
    int n = matrix.size();    //rows
    int m = matrix[0].size();  //columns

    vector<int>col(m,0);
    vector<int>row(n,0);

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(matrix[i][j] == 0){
                col[j] = 1;
                row[i] = 1;
            }
        }
    }
    


    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(col[j] || row[i] == 1){
                matrix[i][j] = 0;
            }
        }
    }

}



int main() {

    vector<vector<int>>matrix = {{1,1,0},{1,1,1},{1,1,1}};

    setMatrixToZero(matrix);

    for(auto it : matrix){
        for(int ti : it){
            cout<<ti<<" ";
        }
        cout<<endl;
    }


return 0;
}



//Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.

//approach : we will get 2 arr if size m and n , ans mark it 1 if any zero encounter and than re iterate through all matrix and set zero according to those arrays. 


