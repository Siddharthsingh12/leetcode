class Solution {
public:
    int numTrees(int n) {
        double t=tgamma(n+1);
        double ans = tgamma(2*n+1)/(t*t*(n+1));
        return round(ans);
    }
};