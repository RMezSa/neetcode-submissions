class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> dict;

        int n = s.size();
        int m = t.size();

        if(m != n){
            return false;
        }
        
        for(int i = 0; i < n; i++){
            dict[s[i]]++;
        }

        for(int j = 0; j < m; j++){
            dict[t[j]]--;
            if (dict[t[j]] < 0){
                return false;
            }
        }
        return true;
    }
};
