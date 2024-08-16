class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        long long dist=1;
        long long apples=0;
        long long gridapp = 0;
        long long corner=0;
        while(apples<neededApples){
            gridapp = 0;
            corner = 2*dist;
            // for(long long i=dist+1; i<=corner; i++){
            //     gridapp +=i;
            // }
            gridapp = corner*(corner+1)/2;
            gridapp = gridapp - ((dist)*(dist+1)/2);
            gridapp = 2* gridapp;
            gridapp = gridapp + dist;
            gridapp = 4*gridapp;
            gridapp = gridapp - (4*corner);
            apples+=gridapp;
            dist++;
            // cout<<gridapp<<endl;
            // cout<<"Apples: "<<apples<<endl;
        }
        return 4*((dist-1)*2);
    }
};