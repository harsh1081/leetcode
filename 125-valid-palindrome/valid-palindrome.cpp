class Solution {
public:
    bool correct(char ch){
        if( (ch >='0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
            return true;
        }
        return false;
    }
    
    bool isPalindrome(string s) {

        int l = 0; int r = s.size()-1;
        while(l<r){
            if(!correct(s[l])){
                l++;
                continue;
            }
            if(!correct(s[r])){
                r--; 
                continue;
            }

            if(tolower(s[l])!=tolower(s[r])) return false;

            l++; r--;
        }
        return true;
        
    }
};