class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int a = strs.size();
        string ans = "";
        string n = strs[0];
        string m = strs[a-1];
        for(int i=0;i<n.size();i++){
            if(n[i]==m[i]){
                ans += n[i];
            }
            else{
                break;
            }
        }

        return ans;
        
    }
};