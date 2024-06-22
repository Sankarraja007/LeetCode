class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int n = hours.size();
        vector<int> ans(n, 0);
        int count=0;
        for(int i=0; i<n; i++){
            ans[i]=(hours[i]%24);
        }
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(((ans[i]+ans[j])%24)==0){
                    count++;
                }
            }
        }
        return count;
        
    }
};