class Solution {
public:
    double myPow(double x, int n) {
        if (n == INT_MIN) {
            return myPow(x, n + 1) / x;
        }
        if(n<0){
            x=1/x;
            n=-n;
        }
        if(n==0){
            return 1;
        }
        else{
            if(n%2==0){
                double half=myPow(x, n/2);
                return half*half;
            }
            else{
                double half2=myPow(x, (n-1)/2);
                return half2*half2*x;
            }
        }
    }
};