class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int left = 0;
        int right = n - 1;

        if (n == 0){
            return;
        }

        while(left < right){
            char aux = s[right]; 
            s[right] = s[left];
            s[left] = aux;
            left++;
            right--; 
        }
    }
};