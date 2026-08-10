// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0. You must do it in place.
#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    void setZeroes(vector<vector<int>>& matrix){
        int m = matrix.size(); //length of row
        int n= matrix[0].size();//length of cols
        int row_arr[m]={0};
        int col_arr[n]={0};
        for(int i=0;i<m; i++){
            for(int j=0;j<n; j++){
                if(matrix[i][j]==0){
                    row_arr[i]=1;
                    col_arr[j]=1;
                }
            }
        }
        for(int i=0;i<m; i++){
            for(int j=0;j<n; j++){
                if(row_arr[i]==1){
                    if(matrix[i][j] !=0) matrix[i][j]=0;
                }else if(col_arr[j]==1){
                    if(matrix[i][j] !=0) matrix[i][j]=0;
                }
            }
        }
        
    }
};
int main(){
    vector<vector<int>> matrix={{1,1,1},{1,0,1},{1,1,1}};
    Solution sol;
    sol.setZeroes(matrix);
    for(auto row:matrix){
        for(auto val: row){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}