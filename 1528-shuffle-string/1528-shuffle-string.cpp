class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans=s;
        for(int i =0; i< indices.size();i++)
        {
            ans[indices[i]] = s[i];
        }
        return ans;
        //codeleet
        //indices[0] = 4 => ans[4] = s[0] = c
        //indices[1] = 5 => ans[5] = s[1] = o
        //indices[2] = 6 => ans[4] = s[2] = d
        //indices[3] = 7 => ans[5] = s[3] = e
        //indices[4] = 0 => ans[0] = s[4] = l leetcode
        //indices[5] = 1 => ans[1] = s[5] = e
        //indices[6] = 2 => ans[2] = s[6] = e
        //indices[7] = 3 => ans[3] = s[7] = t
    }
};