// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0. You must do it in place.
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size(); //number of element in a row
        int m=matrix[0].size(); // number of element in a column

        //In optimal case we need to iterate matrix itself
        // initailize first row and column with zero in matrix
        int col0=1;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;

                    if(j !=0){
                        matrix[0][j]=0;
                    }else{
                        col0=0;
                    }
                }
            }
        }
        for(int i= 1; i<n; i++){
            for(int j=1; j<m; j++){
                if(matrix[i][j] != 0){
                    if(matrix[0][j]==0 || matrix[i][0]==0) matrix[i][j]=0; 
                }
            }
        }
        if(matrix[0][0]==0){
            for(int j=0; j<m; j++) matrix[0][j]=0;
        }
        if(col0 == 0){
            for(int i=0; i<m; i++) matrix[i][0]=0;
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