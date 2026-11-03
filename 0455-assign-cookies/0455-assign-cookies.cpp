class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int first=0;
        int second=0;
        int ans=0;
        while(first< g.size() && second<s.size()){
            if(g[first]<=s[second]){
                first++,second++;
                ans++;
            }
            else{
                second++;
            }
        }
        return ans;
    }
};
