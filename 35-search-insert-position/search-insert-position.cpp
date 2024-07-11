class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low =0;
        int high = nums.size()-1;
        int mid;
        int ans;
        while(low<=high){
            mid = low + (high - low)/2;
            if(nums[mid]<target){
                ans = mid+1;
                low = mid+1;
            }
            else{
                high = mid-1; 
            }
        }
        return ans;
        
    }
};