class Solution {
public:
    void sortColors(vector<int>& nums) {
        // 2 pass of arr o(n) o(1)
    //     int zero=0,one=0,two=0;
    //     for(int i: nums){
    //         if(i==0) zero++;
    //         else if(i==1) one++;
    //         else two++;
    //     }
    //    int index=0;
    //     while(zero--) nums[index++]=0;
    //     while(one--) nums[index++]=1;
    //     while(two--) nums[index++]=2;
    //     return ;
    int low=0,mid=0,high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
    return ;
    }
};