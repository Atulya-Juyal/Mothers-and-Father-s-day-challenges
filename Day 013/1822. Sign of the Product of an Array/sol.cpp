class Solution {
public:
    int arraySign(vector<int>& nums) {
        int c = 0;
        for(int i = 0; i < nums.size(); i++) 
        {
            if(nums[i] == 0) return 0;
            if(nums[i] < 0) c++;
        }
        return c % 2 ? -1 : 1;
    }   
};