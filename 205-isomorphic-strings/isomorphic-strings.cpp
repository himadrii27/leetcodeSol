class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256] = {0}; //mapping of each char of s to each char of t
        bool isTmap[256] = {0}; //keep track of if t[i] char has already been mapped by s[i]
        for(int i = 0; i<s.size();i++){
            if(hash[s[i]]==0 && isTmap[t[i]]==0){
                hash[s[i]] = t[i];
                isTmap[t[i]] = true;
            }
        }
        //now when the mapping has been successfully done map and s to t using hash
        for(int i = 0; i<s.size(); i++){
            if(char(hash[s[i]]) != t[i]){
                return false;
            }
        }
        return true;
    }
};