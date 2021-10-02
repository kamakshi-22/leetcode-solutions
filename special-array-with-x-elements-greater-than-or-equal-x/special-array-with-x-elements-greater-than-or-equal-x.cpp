class Solution {
public:
    int specialArray(vector<int>& nums) {
       int i,j,n=nums.size();
        for (i=0;i<1000;i++)
        {  int c=0;
           for (j=0;j<n;j++) 
           {    
            if(nums[j]>=i)
             c++; 
            } 
              
         if(c==i)
         return i;
            
        }
        
        return -1;
    }
};