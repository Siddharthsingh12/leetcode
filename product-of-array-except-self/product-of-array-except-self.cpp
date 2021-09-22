class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans=nums;
        int n=nums.size();
        for(int i=1;i<n;i++){
            nums[i]=nums[i-1]*nums[i];
        }
        for(int i=n-2;i>=0;i--){
            ans[i]=ans[i+1]*ans[i];
        }
        ans[0]=ans[1];
        for(int i=1;i<n;i++){
            if(i+1<n)
                ans[i]=nums[i-1]*ans[i+1];
            else
                ans[i]=nums[i-1]*1;
        }
        return ans;
    }
};