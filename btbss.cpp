class Solution {
public:
    int maxProfit(vector<int>& p) {
       int mi = p[0];
        int ans=0;
        for(int i=0;i<p.size();i++){
            int pr=p[i]-mi;
            ans = max(ans,pr);
            mi=min(p[i],mi);
        }
        return ans;
    }
};