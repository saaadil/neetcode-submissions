class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash1[26]={0};
        int hash2[26]={0};
        if (s.size()==t.size()){
            for (int i=0; i<s.size(); i++){
                hash1[s[i]-'a']++;
                hash2[t[i]-'a']++;
            }
            for (int j=0; j<26; j++){
                if (hash1[j]!=hash2[j]){
                    return false;
                }
            }
            return true;
        }
        return false;
    }
};
