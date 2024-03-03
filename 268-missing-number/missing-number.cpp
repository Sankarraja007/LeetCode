class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int count=nums.size();
        count=count*(count+1)/2;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
        }
        return count-sum;
    }
};