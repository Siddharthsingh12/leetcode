class Solution {
public:
    int arrangeCoins(int n) {
        long long low=0,high=n,steps,mid;
        while(low<=high){
            mid=low+(high-low)/2;
            steps=mid*(mid+1)/2;
            if(steps==n) return (int)mid;
            if(steps<n) low=mid+1;
            else high=mid-1;
        }
        return (int)high;
    }
};