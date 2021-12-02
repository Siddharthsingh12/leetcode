class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        int dp[amount+1],ans;
        dp[0]=0;
        for(int i=1;i<=amount;i++) dp[i]=INT_MAX-1;
        for(int i=1;i<=amount;i++){
            ans=INT_MAX-1;
            for(int j=0;j<n;j++){
                if(coins[j]<=i){
                    ans=min(ans,dp[i-coins[j]]);
                }
                if(ans==INT_MAX-1)
                    dp[i]=INT_MAX-1;
                else
                    dp[i]=ans+1;
            }
        }
        if(dp[amount]==INT_MAX-1) return -1;
        else return dp[amount];
    }
};