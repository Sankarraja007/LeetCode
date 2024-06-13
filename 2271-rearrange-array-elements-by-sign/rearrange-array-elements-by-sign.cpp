class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i=0;
        int j=0;
        int n = nums.size();
        int x = 0;
        vector<int> result(n, 0);
        while(i<n && j<n){
            while(nums[i]<0){
                i++;
            }
            while(nums[j]>0){
                j++;
            }
            result[x]=nums[i];
            x++;
            result[x]=nums[j];
            x++;
            i++;
            j++;

        }
        return result;
    }
};