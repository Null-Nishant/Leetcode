class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size()-1;
        for(int i=n;i>-1;i--){
            if((num[i]-'0')%2==0){
                num.pop_back();
            }
            else{
                return num;
            }
        }
        return "";
    }
};