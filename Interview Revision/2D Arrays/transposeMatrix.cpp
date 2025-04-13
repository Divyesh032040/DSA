
#include <bits/stdc++.h> 
using namespace std;

void transposeMatrix(vector<vector<int>> &matrix){
    int n = matrix.size();    //rows
    int m = matrix[0].size();  //columns

    for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
            swap(matrix[i][j] , matrix[j][i]);
        }
        cout<<endl;
    }
}



int main() {

    vector<vector<int>>matrix = {{1,2,3},{4,5,6},{7,8,9}};

    transposeMatrix(matrix);

    for(auto it : matrix){
        for(int ti : it){
            cout<<ti<<" ";
        }
        cout<<endl;
    }


return 0;
}




