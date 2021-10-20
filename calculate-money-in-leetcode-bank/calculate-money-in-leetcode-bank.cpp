class Solution {
public:
    int totalMoney(int n) {
        int d=n%7;
        int w=n/7;
        if(n<=7) return (n*(n+1))/2;
        return ((2*28+(w-1)*7)*w/2)+((2*(w+1)+(d-1))*d/2);
    }
};