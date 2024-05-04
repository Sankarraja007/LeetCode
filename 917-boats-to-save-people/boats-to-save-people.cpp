class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int x=0;
        for(int l=0, len = people.size()-1; l<=len; len--){
            x++;
            if(people[l]<=limit-people[len]){
                l++;
            }
        }
        return x;
    }
};