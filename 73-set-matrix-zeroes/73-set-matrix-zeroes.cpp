class Solution {
public:
    
  /*
        brute force : 
            1. traverse the matrix and search for 0s -----> O(n*m)
            2. set entire row and column of that 0 element as -1 -----> O(n+m)
            3. if we encounter 0 while traversing we don't change it
            4. again traverse matrix and put 0 in place of 1
        
        time complexity : O((n*m)*(n+m))
        space complexity : O(1)
            
            
    */ 
    
    void setZeroes(vector<vector<int>>& m) {
        
        bool row = false, col = false;
        
        //first traversal
        //set dummy row & col i.e [i][0] & [0][j]
        for(int i=0; i<m.size(); i++)
        {
            for(int j=0; j<m[0].size(); j++)
            {
                // if element is 0 set variables to true and dummy row & col to 0
                if(m[i][j] == 0)
                {
                    if(i==0) row = true;
                    if(j==0) col = true;
                    m[0][j] = m[i][0] = 0;
                }
            }
        }
        
        //second traversal
        //for rest of matrix
        for(int i=1; i<m.size(); i++)
        {
            for(int j=1; j<m[0].size(); j++)
            {
                // if dummy row & col is 0 set element to 0
                if(m[i][0] == 0 || m[0][j] == 0)
                {
                    m[i][j] = 0;
                }
            }
        }
        
        //if col is true set dummy col to 0
        if(col)
            for(int i=0; i<m.size(); i++)
                m[i][0] = 0;
        
        //if row is true set dummy row to 0
        if(row)
            for(int j=0; j<m[0].size(); j++)
                m[0][j] = 0;
        
        
        /*
            optimized approach :
        
                time complexity : O(2*(n*m))
                space complexity : O(1)
        */
        
        
    }
};