class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size(),i,j;
        
        //iterate back from second last element
        for(i=n-2; i>=0 ; i-- ){
            //find breaking point
            if(nums[i]<nums[i+1])
                break;
        }
        
        //find next greater number
        if(i<0){
            reverse(nums.begin(),nums.end());
        }
        else{
            for(j=n-1;j>i;j--){
            
                if(nums[j]>nums[i])
                    break;
            }
            
            swap(nums[i],nums[j]);
            reverse(nums.begin()+i+1, nums.end());
        }
        
        
    }
};