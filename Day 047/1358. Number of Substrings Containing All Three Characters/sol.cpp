class Solution {
public:
    int numberOfSubstrings(string s) {
        int count = 0, slow = 0, fast = 0;
        unordered_map<char, int> mpp;
        
        while (fast < s.size()) {
            mpp[s[fast]]++;
            while(mpp['a'] > 0 && mpp['b'] > 0 && mpp['c'] > 0){
                mpp[s[slow]]--;
                count+=s.size()-fast;
                slow++;
            }
            fast++;
        }
        
        return count;
    }
};