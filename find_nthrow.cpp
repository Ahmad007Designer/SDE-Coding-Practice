// find nth row in pascalTriangl 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> pascalTriangle_nthrow(int r) {
        vector<vector<int>> triangle(r);
        vector<int> res_arr;
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
        for(int i=0;i<r; i++){
            if(i+1==r){
                for(int j=0;j<triangle[i].size(); j++){
                    res_arr.push_back(triangle[i][j]);
                }           
                return res_arr;
            }
        }
        return res_arr;
    
    }

};
int main(){
    int r=5;//enter row number
    Solution sol; //create object
    vector<int> ans = sol.pascalTriangle_nthrow(r);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}