class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> results;
        for(int i=0; i<n; i++){
            if(results.empty() || (intervals[i][0]>results.back()[1])){
                results.push_back(intervals[i]);
            }
            else{
                results.back()[1] = max(results.back()[1], intervals[i][1]); 
            }
        }
        return results;
        
    }
};