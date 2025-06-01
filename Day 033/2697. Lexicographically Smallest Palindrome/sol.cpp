class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int start =0;
        int end = s.size() - 1;
        while(start < end){
            if(s[start]==s[end]){
                continue;
            }
            else{
                if(s[start] -'a' > s[end] -'a'){
                    s[start]=s[end];
                }
                else{
                    s[end]=s[start];
                }

            }
            start++;
            end--;
        }
       return s; 
    }
};