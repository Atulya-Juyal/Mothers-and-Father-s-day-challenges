class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> trustscore(n+1,0);
        for(auto&t:trust){
            trustscore[t[0]]--;
            trustscore[t[1]]++;
        }
        for(int i=1;i<=n;i++){
            if(trustscore[i]==n-1)
                return i;
        }  
        return -1;    
    }
};