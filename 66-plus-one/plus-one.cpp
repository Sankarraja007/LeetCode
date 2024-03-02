class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        /*long long n=0;
        for(int i=0; i<digits.size(); i++){
            n=n*10+digits[i];
        }
        long long ans = n+1;
        int dig=0;
        long temp=ans;
        while(temp>0){
            temp=temp/10;
            dig++;
        }
        vector<int> sol(dig);
        for(int i=0; i<dig; i++){
            sol[dig-1-i]=ans%10;
            ans=ans/10;
        }
        return sol;*/

        int n=digits.size();
        digits[n-1]++;
        for(int i=n-1; i>=0; i--){
            if(digits[i]==10){
                digits[i]=0;
                if(i!=0){
                    digits[i-1]++;
                }
                else{
                    digits.push_back(0);
                    digits[i]=1;
                }
            }
        }
        return digits;
    }

};