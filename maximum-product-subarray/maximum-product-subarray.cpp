class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.empty()) return 0;
        int maxProduct = nums[0];
        int currentMax = nums[0];
        int currentMin = nums[0];
        for(int i=1;i<nums.size();i++){
            int n1=currentMax*nums[i];
            int n2=currentMin*nums[i];
            currentMax=max(nums[i],max(n1,n2));
            currentMin=min(nums[i],min(n1,n2));
            maxProduct=max(maxProduct,max(currentMax,currentMin));
        }
        return maxProduct;
    }
};