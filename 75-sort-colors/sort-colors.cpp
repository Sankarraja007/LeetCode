class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=0, b=0, c=nums.size()-1;
        while(b<=c){
            if(nums[b]==0){
                swap(nums[a], nums[b]);
                a++;
                b++;
            }
            else if(nums[b]==1){
                b++;
            }
            else if(nums[b]==2){
                swap(nums[c], nums[b]);
                c--;
            }
        }


        /*int n=nums.size();
        int a=0, b=0, c=0;
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                a++;
            }
            else if(nums[i]==1){
                b++;
            }
            else{
                c++;
            }
        }
        for(int i=0; i<a; i++){
            nums[i]=0;
        }
        for(int i=0; i<b; i++){
            nums[i+a]=1;
        }
        for(int i=0; i<c; i++){
            nums[a+b+i]=2;
        }*/

    }
};