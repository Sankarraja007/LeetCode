class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        else{
            string x = countAndSay(n-1);
            x = x+"x";
            string result = "";
            int num = x.length();
            char cur=x[0];
            int a=0;
            for(int i=0; i<num; i++){
                if(cur==x[i]){
                    a++;
                }
                else{
                    result = result + to_string(a);
                    result = result + x[i-1];
                    cur=x[i];
                    a=1;
                }
            }
            return result;

        }
        
    }
};