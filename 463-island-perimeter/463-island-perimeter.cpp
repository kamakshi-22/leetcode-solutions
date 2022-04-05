class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans=0;
        int m= grid.size(), n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                    if(grid[i][j]==1){
                    ans+=4;
                    if(i>0) ans-=grid[i-1][j]; //land above
                    if(j>0) ans-=grid[i][j-1]; //land left
                    if(i<grid.size()-1) ans-=grid[i+1][j]; //land down
                    if(j<grid[i].size()-1) ans-=grid[i][j+1]; //land right
                }                          
            }       
        }
            return ans;
        
        /*
                if(grid[i][j]==0)   
                continue;
                
                if(i==0 || grid[i-1][j]==0) res++; 
                //water above
                if(i==n-1 || grid[i+1][j]==0) res++; 
                //water below
                if(j==0 || grid[i][j-1]==0) res++; 
                //water  left
                if(j==m-1 || grid[i][j+1]==0) res++;
                //water right
        */
        
    }
};