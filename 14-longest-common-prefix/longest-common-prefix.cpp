class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int i = 0;
        
        //infinite loop
        while(true){
            char curr_char = 0;
            for(auto str:strs){
                //out of bound
                if(i>=str.size()){
                    curr_char = 0;
                    break;
                }
                //str will on each string of strs
                //if the curr_char is at 0 that means its at flower then
                if(curr_char == 0){
                    curr_char = str[i];
                }
                //now we have to compare the curr_char with the 1st letters of the rest of the strings
                else if(str[i] != curr_char){
                    curr_char = 0;
                    break;
                }
            }
            if(curr_char == 0){
                //kuch garbar hua hai i.e, str[i]!=curr_char
                break;
            }
            //if all the curr_char matched then push back the ans
            ans.push_back(curr_char);
            i++; // to check the nest character
        }
        return ans;
    }
};