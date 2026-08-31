class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        erase_if(s, [](unsigned char c){
            return !isalnum(c);
        });
        int n = s.size();
        int pi = 0;
        int pf = n-1;
        
        int k = n%2 == 0? n/2 : (n-1)/2;

        for(int i = 0; i < k; i++){
            if(tolower(s[pi]) == tolower(s[pf])){
                pi++;
                pf--;
            }else{
                return false;
            }
        }


        return true;
    }
};
