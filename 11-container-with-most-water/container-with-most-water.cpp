class Solution {
public:
    int maxArea(vector<int>& height) {
        int i= 0;
        int j= height.size()-1;
        int max = -1;
        int vol = 0;
        int mini = -1;
        while(i<=j){
            if(height[i]<height[j]){
                mini = height[i];
            }
            else{
                mini = height[j];
            }
            vol = (j-i)*mini;
            if(vol>max){
                max = vol;
            }
            if(mini==height[i]){
                i++;
            }
            else{
                j--;
            }
        }
        return max;
    }
};