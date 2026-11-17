class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        /*
            5 1 4 2
            1 2 4 5
            l    
                  r

            3 4 5 6 7   8
              l 
              r
           
            3

            1 3 2 3 2
            1 2 2 3 3    3
              l
              r
            3

            1 2 2 3     3
              l   
              r

            3


        */

        sort(people.begin(), people.end());

        int n = people.size();
        int l = 0;
        int r = n - 1;

        int boat = 0;

        while(l < r){
            if(people[l] + people[r] <= limit){
                boat++;
                l++;
                r--;
            }else{
                boat++;
                r --;
            }
        }
        if (r == l){
            boat++;
        }

        return boat;

    }
};