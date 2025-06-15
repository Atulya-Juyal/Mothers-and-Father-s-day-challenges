class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int one , two ,res ;
        one = edges[0][0];
        two = edges[0][1];
        for(int i = 1 ; i < edges.size() ; i++)
        {
            if(edges[i][0] == one || edges[i][1] == one)
            {
                if(edges[i][0] == two || edges[i][1] == two)
                {
                    continue ;
                }
                else
                {
                    res = one;
                    break;
                }
            }
            if(edges[i][0] == two || edges[i][1] == two)
            {
                if(edges[i][0] == one || edges[i][1] == one)
                {
                    continue ;
                }
                else
                {
                    res = two;
                    break;
                }
            }
        }
        return res;
    }
};