class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {   //o(n2)
    if(strs.size()==1) return strs[0];
        string s=strs[0];
        int ans=INT_MAX;
        for(int i=1;i<strs.size();i++){   //o(n)
            int count=0;
            for(int j=0;j<min(s.size(),strs[i].size());j++){   //o(n)
                if(s[j]==strs[i][j]){
                    count++;
                }
                else{
                    break;
                }
            }
                    ans=min(ans,count);
        }
        return ans==INT_MAX?"":s.substr(0,ans);
    }
};
