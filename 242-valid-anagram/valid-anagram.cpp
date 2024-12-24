class Solution {
public:
    bool isAnagram(string s, string t) {
        int freqTable[256] = {0};
        //iterating over s 
        for(int i = 0; i<s.size(); i++){
            freqTable[s[i]]++;
        }
        //using the same frequency and iterating over t
        for(int i = 0; i<t.size(); i++){
            //decrement the count of freq table
            freqTable[t[i]]--;
        }
        //now if frew of all the char should be 0 in freqTable
        for(int i = 0; i<256; i++){
            if(freqTable[i]!=0){
                return false;
            }
        }
        return true;
        
    }
};