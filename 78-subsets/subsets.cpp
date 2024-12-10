class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> results;
        results.push_back({});
        int temp;
        vector<int> t;
        for(int i=0; i<nums.size(); i++){
            temp = nums[i];
            int n = results.size();
            for(int j=0; j<n; j++){
                t = results[j];
                t.push_back(temp);
                results.push_back(t);

            }
        }
        return results;
        
    }
};