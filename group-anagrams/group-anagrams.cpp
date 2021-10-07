class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        vector<vector<string>> res;
        for(auto& itr:strs){
            string s=itr;
            sort(s.begin(),s.end());
            m[s].push_back(itr);
        }
        for(auto& s:m){
            res.push_back(s.second);
        }
        return res;
    }
};