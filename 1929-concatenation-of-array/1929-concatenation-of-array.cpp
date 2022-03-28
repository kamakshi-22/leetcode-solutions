class Solution {
public:
    vector<int> getConcatenation(vector<int>& vrr) {
        int OriginalSize = vrr.size(); 
        vrr.resize(vrr.size()*2);   
        copy(vrr.begin(),vrr.end()-OriginalSize,vrr.begin()+OriginalSize);
        return vrr;
    }
};