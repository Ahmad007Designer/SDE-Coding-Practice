// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0. You must do it in place.
#include <iostream>
#include <vector>
using namespace std;

// Brute Solution
class Solution {
public:
    // marks all elements in a row -1
    void setRowZero(vector<vector<int>>& matrix,int cols,int i){
        for(int k=0;k<cols;k++){
            if(matrix[i][k]!=0) matrix[i][k]=-1;
        }
    }
    // marks all element in a col -1
    void setColZero(vector<vector<int>>& matrix, int rows, int j){
        for(int k=0;k<rows;k++){
            if(matrix[k][j]!=0) matrix[k][j]=-1;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(); //size of row
        int n=matrix[0].size(); // size of column

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                    setRowZero(matrix,n,i);
                    setColZero(matrix,m,j);
                }
            }
                
        }
        // remove all -1 from this matrix
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]== -1){
                    matrix[i][j]=0;
                }
            }
                
        }
    }

};

int main(){
    vector<vector<int>> matrix={{1,1,1},{1,0,1},{1,1,1}};
    Solution sol; //create object
    sol.setZeroes(matrix);
    for(auto row: matrix){
        for(auto val:row){
            cout<< val <<" ";
        }
        cout<<endl;
    }
    return 0;
}
// Time complexity: (m x n)(m+n) + (m x n) 