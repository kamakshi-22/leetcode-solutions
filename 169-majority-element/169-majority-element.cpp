class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> count; int ans,n=nums.size();
        
        for(int i=0;i<n;i++)
        count[nums[i]]++;
            
        for(auto i: count)
        { if(i.second > n/2)
          {ans=i.first;break;}
        }
        
        return ans;
    }
};