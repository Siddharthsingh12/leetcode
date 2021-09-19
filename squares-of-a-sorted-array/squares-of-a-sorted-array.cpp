class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int x=0,y=nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(abs(nums[x])<abs(nums[y])){
                ans[i]=nums[y]*nums[y];
                y--;
            } else{
                ans[i]=nums[x]*nums[x];
                x++;
            }
        }
        return ans;
    }
};