class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        //vector with vectors inside to return pascal's triangle
        vector<vector <int>> r(numRows);
        
        for(int i=0; i<numRows ; i++){
            
            //every column r[i] has elements = num of rows
            r[i].resize(i+1);
            //every first and last element is 1
            r[i][0]=r[i][i]=1;
            
            //calculate rest of triangle
            for(int j=1; j<i; j++)
                r[i][j] = r[i-1][j-1] + r[i-1][j];
            
        }
        return r;
    }
};