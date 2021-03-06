class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(), n2=nums2.size();
        unordered_map<int,int> m;
        for(int i=0;i<n1;i++)
                m[nums1[i]]++;
        vector<int> res;
        for(int i=0;i<n2;i++){
            if(m[nums2[i]]!=0){
                res.push_back(nums2[i]);
                m[nums2[i]]--;
            }
        }
        return res;
    }
};