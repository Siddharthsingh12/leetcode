class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minH;
        for(auto it=m.begin();it!=m.end();it++){
            minH.push(make_pair(it->second,it->first));
            if(minH.size()>k) minH.pop();
        }
        while(minH.size()>0){
            res.push_back(minH.top().second);
            minH.pop();
        }
        return res;
    }
};