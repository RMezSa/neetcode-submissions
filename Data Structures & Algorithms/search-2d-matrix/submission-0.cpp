class Solution {
public:

    int to_flat_index(int r, int c, int n){
        // r*n + c -> 2*4 + 3 
        return r*n + c;
    }

    pair<int, int> to_matrix_index(int num, int m, int n){
        int r = num/n;
        int c = num%n;

        return {r, c};
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int l = 0;
        int r = to_flat_index(m-1, n-1, n);

        int mid = 0;

        while(l <= r){
            mid = l + (r - l)/2;
            pair<int, int> rc = to_matrix_index(mid, m, n);

            if (matrix[rc.first][rc.second] == target){
                return true;
            }else if(matrix[rc.first][rc.second] > target){
                r = mid - 1;
            }else{
                l = mid + 1;
            }


        } 
        return false;

    }
};
