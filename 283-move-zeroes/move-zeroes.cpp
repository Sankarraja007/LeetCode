class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=-1;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1){
            return;
        }
    
        for(int i=j+1; i<n; i++){
            if(nums[i]!=0){
                swap(nums[i], nums[j]);
                j++;
            }
        }


        
        /*vector<int> zeros={};
        vector<int> nonzeros={};
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                zeros.push_back(0);
            }
            else{
                nonzeros.push_back(nums[i]);
            }
        }
        int x=nonzeros.size();
        int y=zeros.size();
        for(int i=0; i<x; i++){
            nums[i]=nonzeros[i];
        }
        for(int i=0; i<y; i++){
            nums[x+i]=zeros[i];
        }*/





        
    }
};