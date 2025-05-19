class Solution {
public:
    void evaluate(stack<int>& nums, char op) {
        if (op == '+') {
            int b = nums.top();
            nums.pop();
            int a = nums.top();
            nums.pop();
            nums.push(a + b);
        } else if (op == '-') {
            int b = nums.top();
            nums.pop();
            int a = nums.top();
            nums.pop();
            nums.push(a - b);
        } else if (op == '*') {
            int b = nums.top();
            nums.pop();
            int a = nums.top();
            nums.pop();
            nums.push(a * b);
        } else {
            int b = nums.top();
            nums.pop();
            int a = nums.top();
            nums.pop();
            nums.push(a / b);
        } 
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        int n = tokens.size();
        for (int i = 0; i < n; ++i) {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/") {
                nums.push(stoi(tokens[i]));
            } else {
                evaluate(nums, tokens[i][0]);
            }
        }
        return nums.top();
    }
};