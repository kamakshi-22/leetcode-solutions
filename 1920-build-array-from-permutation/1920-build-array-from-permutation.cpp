class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            //nums[0]=0 so, ans[0]=nums[nums[0]]=nums[0]=0
            //nums[1]=2 so, ans[1]=nums[nums[1]]=nums[2]=1
            ans[i]=nums[nums[i]];
        }
        return ans;
    }
};