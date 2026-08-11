// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0. You must do it in place.
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
     int pascalTriangleI(int r, int c) {
        vector<vector<int>> triangle(r);
        int cal=0;
        for(int i=0;i<r; i++){
            triangle[i].resize(r+i);
            for(int j=0;j<=i; j++){
                if(i==0 || j==0 || j==i){
                    triangle[i][j]=1;
                }else{
                    triangle[i][j]=triangle[i-1][j-1] + triangle[i-1][j];
                }
                
            }
        }
        for(int i=0;i<r; i++){
            for(int j=0;j<=i; j++){
                if(i==r-1 && j==c-1) return cal=triangle[i][j];
            }           
        }
        return cal;
    
    }

};
int main(){
    int r=5;
    int c=3;
    
    Solution sol; //create object
    int ans = sol.pascalTriangleI(r,c);
    cout << ans << endl;

    return 0;
}