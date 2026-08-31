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
            if(dict.find(s[i]) == dict.end()){
                dict[s[i]] = 0;
            }else{
                dict[s[i]]++;
            }
        }

        for(int j = 0; j < m; j++){
            if(dict.find(t[j]) == dict.end()){
                return false;
            }else{
                if(dict[t[j]] == 0){
                    dict.erase(t[j]);
                }else{
                    dict[t[j]]--;
                }
                
            }
        }
        if(dict.empty()){
            return true;
        }
        return false;
    }
};
