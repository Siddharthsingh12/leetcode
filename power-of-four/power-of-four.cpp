class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        return n>0&&(n%4==0&&isPowerOfFour(n/4));
    }
};