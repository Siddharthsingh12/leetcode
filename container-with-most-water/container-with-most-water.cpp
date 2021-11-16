class Solution {
public:
    int maxArea(vector<int>& height) {
        int m=INT_MIN,n=height.size();
        for(int i=0,j=height.size()-1;i<j;){
            m=max(m,(j-i)*min(height[i],height[j]));
            height[i]<height[j]?i++:j--;
        }
        return m;
    }
};