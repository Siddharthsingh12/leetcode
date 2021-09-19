class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
                m[nums[i]]++;
        for(auto i=m.begin();i!=m.end();i++){
            if(i->second>n/3)
                    v.push_back(i->first);
        }
        return v;
    }
};