class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int maxIndex = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[maxIndex]<nums[i])
                maxIndex=i;        
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(maxIndex != i /*not itself*/ && nums[maxIndex]< 2 * nums[i])
            {  return -1; }       
        }
      
        return maxIndex;
      
    }
};