class Solution {
public:
    int nextGreaterElement(int n) {
        
    vector<int> nums;
        
        while (n!=0){
            nums.push_back(n%10);
            n=n/10;
        }
        
        reverse(nums.begin(),nums.end());
          
        // THIS IS SAME AS NEXT PERMUTATION
        
        int size=nums.size(),fi=-1;
        
        //finding first index
        for(int i=size-2;i>=0;i--){
            
            if(nums[i] < nums[i+1])
            {
                fi=i;
                break;
            }
        }
        
        if(fi==-1) return fi;
        
        //finding second index
        int si=0;
        
        for(int i=fi+1;i<nums.size();i++)
        {
            if(nums[i] > nums[fi])
            {
                si=i;
            }
        }
        
        swap(nums[fi],nums[si]);
        reverse(nums.begin()+fi+1,nums.end());
       
        
        long long int res=0;
        
        for (int i=0;i<size;i++){
            res=res*10+nums[i];
        }
        
        if (res>INT_MAX) return -1;
        return res;
    }

};