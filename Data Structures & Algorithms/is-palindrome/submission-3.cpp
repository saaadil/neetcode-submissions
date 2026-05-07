class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for (int i=0; i<s.size(); i++){
            if (isalnum(s[i])){
                s1+=tolower(s[i]);
            }
        }
        int n=0;
        int m=s1.size()-1;
        while (n<m){
            if (s1[n]!=s1[m]){
                return false;
            }
            n++;
            m--;
        }
        return true;
    }
};
