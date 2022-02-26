class Solution {
public:
    int nextGreaterElement(int n) {      
        string original = to_string(n);
        string s = to_string(n);
        
        next_permutation(s.begin(),s.end());
        
        if(s.size()<=1 || s==original)
            return -1;
        
        int ans = stol(s);
        
        if(ans<n)
            return -1;
        
        return ans;      
    }
};