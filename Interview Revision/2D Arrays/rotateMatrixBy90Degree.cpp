
#include <bits/stdc++.h> 
using namespace std;

vector<vector<int>> rotateClockWise(vector<vector<int>>& matrix){
    int n = matrix.size(); //rows
    int m = matrix[0].size(); //cols

    vector<vector<int>>temp = matrix;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            temp[j][n-1-i] = matrix[i][j];
        }
    }
    return temp;

}

void rotateMatrixOptimal (vector<vector<int>>& matrix){
    int n = matrix.size(); //rows
    int m = matrix[0].size(); //cols

    //transpose the matrix (row will be columns) : matrix[i][j] = matrix[j][i];
    //we will swap elems because if we overwrite than in anther iteration , value will be changed
    // also in transpose , j will start with i+1 because reason we know right 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
            swap(matrix[i][j] , matrix[j][i]);
        }
    }

    //reverse each row
    // reverse the row of array
    for (int i = 0; i < n; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }




}

int main() {

    vector<vector<int>>matrix = {{1,2,3},{4,5,6},{7,8,9}};


    rotateMatrixOptimal(matrix);

    for(auto it : matrix){
        for(int ti : it){
            cout<<ti<<" ";
        }
        cout<<endl;
    }




return 0;
}



// problem Statement: Given a matrix, your task is to rotate the matrix 90 degrees clockwise.
// solution : transformation formula : matrix[i][j] = matrix[j][n-1-i];

//using extra space : tc: n*m and sc: n*m
//optimal : transpose the matrix => reverse each row and we get 90 degree rotated matrix;