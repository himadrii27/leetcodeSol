class Solution {
public:
    int myAtoi(string s) {
        int num  = 0, i = 0, sign = 1; //taking sign 1 for positive
        //ignoring the white spaces
        while(s[i] == ' '){
            i++;
        }

        //determing the sign
        if(i<s.size() && (s[i] == '-' || s[i] == '+')){
            sign = s[i] == '+' ? 1 : -1;
            i++;
        }

        //determining int from char and taking out of bound cases
        while(i<s.size() && isdigit(s[i])){
            //taking out of bound cases
            if(num > INT_MAX/10 || (num == INT_MAX/10 && (s[i]-'0') > 7)){
                return sign == -1 ? INT_MIN : INT_MAX;
            }

            num = num * 10 + (s[i]-'0');
            i++;
        }
        //we are moving the above while loop till the digit is found
        //we come out of the loop
        return num*sign;
    }
};