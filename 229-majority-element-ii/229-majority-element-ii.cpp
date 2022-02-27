class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int size=nums.size(), m1=-1, m2=-1, vote1=0,vote2=0;
        
        for(auto &i: nums)
        {
            if(m1==i) vote1++;
            else if(m2==i) vote2++;
            
            else if(vote1==0) {m1=i;vote1++;}
            else if(vote2==0) {m2=i;vote2++;}
            
            else{vote1--;vote2--;}    
        }
        
        vote1=0;vote2=0;
        
        for(auto &i: nums)
        {
            if(m1==i) vote1++;
            else if(m2==i) vote2++;
        }
        
        vector<int> res;
        if(vote1>size/3) res.push_back(m1);
        if(vote2>size/3) res.push_back(m2);
        
        return res;

    }
};