class Solution {
public:

    bool isPalindromic(string &s, int start, int end){
        while(start<end){
            if(s[start] != s[end]){
                return false;
            }
            start++, end--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        string ans = "";
        for(int i=0; i<s.size();i++){
            for(int j=i; j<s.size(); j++){
                //extract the substring
                if(isPalindromic(s,i,j)){
                    string t = s.substr(i,j-i+1);
                    if(t.size()>ans.size()){
                        ans = t;
                    }
                }
            }
        }
        return ans;
        
    }
};