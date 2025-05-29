class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        // Edge case: Already sorted
        if (nums[left] <= nums[right]) return nums[left];

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Check for pivot
            if (mid > 0 && nums[mid] < nums[mid - 1]) {
                return nums[mid];
            }

            // Move left or right
            if (nums[mid] >= nums[0]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return nums[0];  // fallback, should not be hit
    }
};
