class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> ans;
    vector<int> v(nums);      // 8 1 2 2 3
    sort(v.begin(), v.end()); // 1 2 2 3 8
    vector<int>::iterator lb;

    for (int i = 0; i < nums.size(); i++)
    {
        lb = lower_bound(v.begin(), v.end(), nums[i]);
        //lower bound of nums[0] in vector v:
        //i.e 8 is at v[4]=8
        //so all the elements before are smaller than it
        ans.push_back(lb - v.begin());
    }
        
      /*  for(int i=0;i<nums.size();i++)
        {
            int c=0;
            for(int j=0;j<nums.size();j++)
            {if(nums[i]!=nums[j]&&nums[i]>nums[j])
                c++;}
            ans.push_back(c);
        }*/
        return ans;
    }
};