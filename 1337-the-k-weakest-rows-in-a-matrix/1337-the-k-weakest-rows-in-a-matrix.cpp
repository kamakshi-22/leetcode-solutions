class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int,int>> s;
        for(int i=0;i<mat.size();i++)
        {
            int counts = count(mat[i].begin(),mat[i].end(),1);
            s.insert({counts,i});
/*the pairs will get automatically sort in ascending order on the basis of count*/
        }
        
        vector<int> ans;
        for(auto i: s)
        {
            if(k==0)
            break;
            ans.push_back(i.second);
            k--;              
        }
        return ans;
    }
};