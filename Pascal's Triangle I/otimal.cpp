// Given two integers r and c, return the value at the rth row and cth column (1-indexed) in a Pascal's Triangle.
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
     int pascalTriangleI(int r, int c) {
        int n=r-1;
        int k=c-1;
        int res=1;
        //NCr = (n!)/r!*(n!-r!)
        //5c3 = 5 * 4 * 3 / 1 * 2 * 3
        for(int i=0;i<k; i++){
            res *=(n-i);
            res /=(i+1);
        }
     return res;
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