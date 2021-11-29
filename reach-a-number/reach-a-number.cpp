class Solution {
public:
    int reachNumber(int target) {
        target=abs(target);
        int i=0,sum=0;
        while(sum<target){
            i++;
            sum+=i;
        }
        int diff=target-sum,ans;
        if(diff==0) ans=i;
        else if(diff%2==0) ans=i;
        else if(diff%2!=0&&i%2!=0) ans=i+2;
        else if(diff%2!=0&&i%2==0) ans=i+1;
        return ans;
    }
};