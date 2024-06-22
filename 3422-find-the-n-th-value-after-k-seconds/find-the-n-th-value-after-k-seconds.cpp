class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<int> nums(n,1);
        int mod = 1000000007;
        for(int i=0; i<k; i++){
            for(int j=1; j<n; j++){
                nums[j]=(nums[j]+nums[j-1])%mod;
            }
        }
        return nums[n-1];
        
    }
};