class Solution {
public:
    bool prime[10000000];
    int countPrimes(int n) {
        for(int i=0;i<n;i++){
            prime[i]=true;
        }
        for (int p = 2; p * p <= n; p++)
        {
            if (prime[p] == true)
            {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        if(n<2) return 0;
        int count=0;
        for(int i=2;i<n;i++){
            if(prime[i]==true) count++;
        }
        return count;
    }
};