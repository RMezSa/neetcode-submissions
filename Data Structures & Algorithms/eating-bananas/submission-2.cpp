class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        /*

        1 < k < max(piles)
        1  2 3 4 5 6 
        10 9 8 7
        f  t t t

        r/mid + mid - l

        */  
        int n = piles.size();
        int max_pile = 0;
        for(int i = 0; i < n; i++){
            max_pile = max(max_pile, piles[i]);
        }

        int l = 0;
        int r = max_pile;
        int mid = 0;
        long long count = 0;

        while(r-l > 1){
            mid = (l+r)/2;
            count = 0;
            for(int i = 0; i < n; i++){
                count += (piles[i] + mid - 1LL)/mid;
                if (count >  h){
                    break;
                }
            }

            /*
                1 4 3 2
                4
                    1
                2

            */ 
            if(count <= h){
                r = mid;
            }else {
                l = mid; 
            }
        }

        return r;

    }
};
