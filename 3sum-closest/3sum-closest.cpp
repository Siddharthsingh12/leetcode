class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=0,closest=0;
        ans=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size()-2;i++){
            int start=i+1,end=nums.size()-1;
            while(start<end){
                closest=nums[i]+nums[start]+nums[end];
                if(ans==target) return target;
                ans=abs(closest-target)>abs(ans-target)?ans:closest;
                if(closest>target) end--;
                else if(closest<target) start++;
            }
        }
        return ans;
    }
};