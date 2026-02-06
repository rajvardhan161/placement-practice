class Solution {
public:
vector<vector<int>>dp;
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        dp.assign(n,vector<int>(m,-1));
            return rec(0,0,word1,word2);
    }
    int rec(int i , int j ,string &s1,string &s2){
        if(i==s1.length()){
            return  s2.length()-j;
        }
        if(j ==s2.length()){
            return s1.length()-i;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int res = 1+rec(i,j+1,s1,s2);
        res = min(res,1+rec(i+1,j,s1,s2));
        res = min(res,1+rec(i+1,j+1,s1,s2));
        if(s1[i]==s2[j]){
            res = min(res,rec(i+1,j+1,s1,s2));
        }
        dp[i][j]=res;
        return dp[i][j];
    }
};
