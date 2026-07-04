class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0,one=0,two=0;
        for(int i: nums){
            if(i==0) zero++;
            else if(i==1) one++;
            else two++;
        }
       int index=0;
        while(zero--) nums[index++]=0;
        while(one--) nums[index++]=1;
        while(two--) nums[index++]=2;
        return ;
    }
};