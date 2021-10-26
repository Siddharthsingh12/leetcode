class Solution {
public:
    int arrangeCoins(int n) {
        long long i=0,j=n;
        long long mid,steps;
        while(i<=j){
            mid=i+(j-i)/2;
            steps=(mid*(mid+1))/2;
            if(steps==n) return (int)mid;
            if(steps<n) i=mid+1;
            else j=mid-1;
        }
        return (int)j;
    }
};