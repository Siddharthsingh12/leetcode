class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> ans;
        sort(nums.begin(),nums.end());
        helper(nums,0,ans,v);
        return v;
    }
    set<vector<int>> s;
    void helper(vector<int>& nums,int i,vector<int>& ans,vector<vector<int>>& v){
        if(i==nums.size()){
            if(s.find(ans)==s.end()){
                v.push_back(ans);
                s.insert(ans);
            }
            return;
        }
        ans.push_back(nums[i]);
        helper(nums,i+1,ans,v);
        ans.pop_back();
        helper(nums,i+1,ans,v);
    }
};