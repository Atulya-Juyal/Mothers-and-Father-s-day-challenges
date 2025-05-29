class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        bitset<100001> s;
        int x;
        for (const int& num : nums) {
            if(s[num]) {
                x = num;
                break;
            }
            s.set(num);
        }
        return x;
    }
    
};