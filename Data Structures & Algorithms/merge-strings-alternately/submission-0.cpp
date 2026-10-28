class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string resultado = "";
        int p1 = 0; 
        int p2 = 0; 
        int n1 = word1.size();
        int n2 = word2.size();

        while(p1 < n1 or p2 < n2){
            if(p1 < n1 and p2 < n2){
                resultado += word1[p1];
                resultado += word2[p2];
                p1++;
                p2++;
            }else if(p1 < n1){
                resultado += word1[p1];
                p1++;
            }else{
                resultado += word2[p2];
                p2++;
            }

        }
        return resultado;
        
    }
};