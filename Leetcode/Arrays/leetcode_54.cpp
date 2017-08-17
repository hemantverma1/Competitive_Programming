class Solution {
public:
    vector<int> spiralOrder(vector<vector<int> >& mat) {
        vector<int> ans;
        int m=mat.size();
        if(m){
            int n=mat[0].size(), l=0, r=n-1, t=0, b=m-1, count=0, total=m*n;
            while(count<total){
                for(int i=l; b>=t && i<=r; i++)         //if you wouldnt put "b>=t" condition, this will backfire!
                    count++, ans.push_back(mat[t][i]);
                t++;
                for(int i=t; l<=r && i<=b; i++)         //if you wouldnt put "l<=r" condition, this will backfire!
                    count++, ans.push_back(mat[i][r]);
                r--;
                for(int i=r; b>=t && i>=l; i--)         //if you wouldnt put "b>=t" condition, this will backfire!
                    count++, ans.push_back(mat[b][i]);
                b--;
                for(int i=b; l<=r && i>=t; i--)         //if you wouldnt put "l<=r" condition, this will backfire!
                    count++, ans.push_back(mat[i][l]);
                l++;
            }
        }
        return ans;
    }
};
