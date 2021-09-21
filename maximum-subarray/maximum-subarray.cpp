class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxEle=nums[0],currSum=nums[0];
        for(int i=1;i<nums.size();i++){
            currSum=max(currSum+nums[i],nums[i]);
            maxEle=max(currSum,maxEle);
        }
        return maxEle;
    }
};