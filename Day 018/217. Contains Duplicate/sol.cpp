class Solution {
    public:
bool containsDuplicate(vector<int>& nums) {

        size_t sz = nums.size();

        if (sz < 2){
            return false;
        }
        sort(begin(nums), end(nums));
        for (int i = 1; i < sz; ++i){
            if (nums[i] == nums[i-1]){
                return true;
            }
        }
        return false;
    }
};