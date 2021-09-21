class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi=0,ind=0;
        bool flag=true;
        for(int i=0;i<nums.size();i++){
            if(maxi<nums[i]){
                maxi=nums[i];
                ind=i;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(maxi/2<nums[i] && i!=ind){
                flag=false;
                break;
            }
        }
        if(flag) return ind;
        return -1;
    }
};