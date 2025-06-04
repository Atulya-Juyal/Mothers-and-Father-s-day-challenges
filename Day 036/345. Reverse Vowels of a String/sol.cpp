class Solution {
public:

    bool vowel(char x){
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
            return true;
        }else return false;
    }
    string reverseVowels(string s) {
        int left=0;
        int right = s.size()-1;
        while(left<=right){
            if(vowel(tolower(s[left]))){
                if(vowel(tolower(s[right]))){
                    swap(s[left],s[right]);
                    left++;
                    right--;
                }else{
                    right--;
                    continue;
                }
            }else{
                left++;
                continue;
            }
        }
        return s;
    }
};