class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int> hash;
        map<int, int>::iterator it;
        for(int i=0; i<n; i++){
            hash[nums[i]]=i;
        }
        for(int i=0; i<n; i++){
            int rem = target-nums[i];
            it = hash.find(rem);
            if(it!=hash.end() && it->second!=i){
                return {i, it->second};
            }
        }
        return {-1,-1};
    }
};