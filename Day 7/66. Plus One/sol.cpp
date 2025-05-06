class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            int n=digits.size();
            int x=n-1;
            int y=0;
            while(x!=-1 && digits[x]==9 ){
                digits[x]=0;
                x--;
            }
            if(x==-1){
                digits[0]=1;
                digits.push_back(0);
                return digits;
            }
            digits[x]+=1;
            return digits;
        }
    };