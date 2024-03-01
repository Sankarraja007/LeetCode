class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n= numRows;
        vector<vector<int>> sol(n);
        for(int i=0; i<n; i++){
            sol[i]=vector<int>(i+1, 0);
        }
        for(int i=0; i<n; i++){
            sol[i][0]=1;
            sol[i][i]=1;
        }
        for(int i=2; i<n; i++){
            for(int j=1; j<i; j++){
                sol[i][j]=sol[i-1][j-1]+sol[i-1][j];
            }
        }

        return sol;
    }
};