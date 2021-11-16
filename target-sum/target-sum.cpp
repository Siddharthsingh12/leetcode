class Solution {
public:
    int countSubsetSum(vector<int>& nums,int s1){
        int t[nums.size()+1][s1+1];
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<s1+1;j++){
                if(i==0) t[i][j]=0;
                if(j==0) t[i][j]=1;
            }
        }
        for(int i=1;i<nums.size()+1;i++){
            for(int j=0;j<s1+1;j++){
                if(nums[i-1]<=j){
                    t[i][j]=t[i-1][j-nums[i-1]]+t[i-1][j];
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[nums.size()][s1];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        target=abs(target);
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=nums[i];
        if((sum + target)%2!=0||sum<target) return 0;
        int s1=(target+sum)/2;
        int count=countSubsetSum(nums,s1);
        return count;
    }
};