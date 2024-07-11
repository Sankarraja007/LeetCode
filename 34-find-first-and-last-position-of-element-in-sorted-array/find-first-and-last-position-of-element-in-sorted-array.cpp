class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        int low = 0;
        int high = nums.size()-1;
        int mid;
        while(low<=high){
            mid = low + (high - low)/2;
            if(nums[mid]>=target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        if(low>=nums.size() || nums[low]!=target){
            return ans;
        } else{
            ans[0]=low;
        }
        high = nums.size()-1;
        while(low<=high){
            mid = low + (high - low)/2;
            if(nums[mid]<=target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        ans[1]=high;
        
        

        return ans;
    }
};