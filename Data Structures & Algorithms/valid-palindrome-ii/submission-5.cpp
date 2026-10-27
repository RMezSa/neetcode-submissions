class Solution {
public:

    bool palindromo(string s){
        int n = s.size();
        if (n == 1){
            return true;
        }
        int left = 0;
        int right = n - 1;

        while(left < right){
            if(s[left] != s[right]){
                return false;
            }else{
                left ++;
                right --;
            }
        }
        return true;

    }

 // abecddcba
 // lcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuc u l
    bool validPalindrome(string s) {
        int n = s.size();
        if (n == 1){
            return true;
        }
        int left = 0;
        int right = n - 1;
        
        string sub = "";
        while(left < right){
            if (s[left] == s[right]){
                left ++;
                right --;

            }else{
                bool decision1 = false;
                bool decision2 = false;
                if(s[left + 1] == s[right]){
                    //cout << "Entra" << "\n";
                    sub = s.substr(left + 1,  right - left);
                    decision1 = palindromo(sub);
                }
                if(s[left] == s[right - 1]){
                   // cout << "Entra 2" << "\n";
                    sub = s.substr(left, right - left );
                    decision2 = palindromo(sub); 
                }
                if (s[left + 1] != s[right] && s[left] != s[right - 1]){
                    return false;
                }
                return decision1 || decision2;
                
            }
        }
        return true;
    }
};