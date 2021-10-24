class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        int n=asteroids.size();
        for(int i=0;i<n;i++){
           if(s.empty()||asteroids[i]>0) s.push(asteroids[i]);
            else{
                while(!s.empty()&&s.top()>0&&s.top()<abs(asteroids[i])) s.pop();
                if(!s.empty()&&s.top()==abs(asteroids[i])) s.pop();
                else{
                    if(s.empty()||s.top()<0) s.push(asteroids[i]);
                }
            }
        }
        vector<int> res(s.size());
        for(int i = (int)s.size() - 1; i >= 0; i--) {
            res[i] = s.top();
            s.pop();
        }
        return res;
        
    }
};