class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> s;
        int n=temperatures.size();
        vector<int> res(n);
        s.push(n-1);
        for(int i=temperatures.size()-1;i>=0;i--){
            while(s.size()>0&&temperatures[i]>=temperatures[s.top()])
                s.pop();
            if(s.size()==0){
                res[i]=0;
            } else{
                res[i]=s.top()-i;
            }
            s.push(i);
        }
        return res;
    }
};