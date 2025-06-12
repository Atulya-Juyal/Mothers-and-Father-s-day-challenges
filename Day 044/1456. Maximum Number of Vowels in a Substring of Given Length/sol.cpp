class Solution {
public:
    bool vowel(char c){
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int i = 0, j = 0;
        int count =0;
        for (; j < k; j++) {
            if(vowel(s[j])) count++;
        }
        int maxi = count;
        while (j < s.size()) {
            if(vowel(s[j])) count++;
            if(vowel(s[i])) count--;
            i++;
            j++;
            maxi = max(count, maxi);
        }
        return maxi;
    }
};