class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> pref(n),suf(n);
        pref[0]=nums[0];
        for(int i=1;i<n;i++){
            pref[i]=nums[i]+pref[i-1];
        }
        suf[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=nums[i]+suf[i+1];
        }
        int ind=-1;
        for(int i=0;i<n;i++){
            if(pref[i]==suf[i]){
                ind=i;
                break;
            }
        }
        return ind;
    }
};