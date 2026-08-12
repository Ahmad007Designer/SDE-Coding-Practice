// generate whole pascalTriangl element  
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> genrate_pascalTriangle(int r) {
        vector<vector<int>> triangle(r);
        for(int i=0;i<r; i++){
            triangle[i].resize(1+i);
            for(int j=0;j<=i; j++){
                if(i==0 || j==0 || j==i){
                    triangle[i][j]=1;
                }else{
                    triangle[i][j]=triangle[i-1][j-1] + triangle[i-1][j];
                }
                
            }
        }
        return triangle;
    
    }

};
int main(){
    int r=5;//enter row number
    Solution sol; //create object
    vector<vector<int>> ans = sol.genrate_pascalTriangle(r);
    for(auto row:ans){
        for(auto val:row){
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;
}