class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count=0;
        int len=s.length();
        for(int i=0; i<len; i++){
            if(s[i]=='1'){
                count++;
            }
        }
        string sol(len, 0);
        for(int i=0; i<len-1; i++){
            if(count>1){
                sol[i]='1';
                count--;
            }
            else{
                sol[i]='0';
            }
        }
        sol[len-1]='1';
        return sol;

    }
};