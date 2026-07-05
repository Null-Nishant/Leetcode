class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int digit_range=0;
        for(int i: nums){
            int small=9;
            int large=0;
            while(i){
                int digit=i%10;
                i/=10;
                small=min(digit,small);
                large=max(large,digit);
            }
            digit_range=max(digit_range,large-small);
        }
        int sum=0;
         for(int i: nums){
            int small=9;
            int large=0;
            int temp=i;
            while(i){
                int digit=i%10;
                i/=10;
                small=min(digit,small);
                large=max(large,digit);
            }
            if(digit_range==large-small){
                sum+=temp;
            }
        }
        return sum;
    }
};