class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int type0=0,type1=nums.size()-1;
        while(type0<type1){
            if(nums[type0]%2==1){
                swap(nums[type0],nums[type1]);
                type1--;
            } else type0++;
        }
        return nums;
    }
};