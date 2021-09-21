class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int sum=0,curr=0,ans=0;
        for(int i=0;i<arr.size();i++){
            sum+=i;
            curr+=arr[i];
            if(sum==curr)
                    ans++;
        }
        return ans;
    }
};