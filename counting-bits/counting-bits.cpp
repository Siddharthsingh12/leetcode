class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            int x=i,count=0;
            while(x>0){
                count++;
                x=x&(x-1);
            }
            ans.push_back(count);
        }
        return ans;
    }
};