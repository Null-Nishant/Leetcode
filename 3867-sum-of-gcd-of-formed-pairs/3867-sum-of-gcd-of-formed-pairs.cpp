class Solution {
public:
    int gcd(int a,int b){
        while(b!=0){
            int temp=b;
             b=a%b;
            a=temp;
        }
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        long long ans=0;

        vector<int>arr;
        int maxi=nums[0];
        for(int i:nums){
            maxi=max(i,maxi);
            arr.push_back(gcd(maxi,i));
        }

        sort(arr.begin(),arr.end());

        int st=0,end=arr.size()-1;
        // for(int i:arr){
        //     cout<<i<<" ";
        // }
        while(st<end){
            ans+=gcd(arr[st++],arr[end--]);
        }
        return ans;
    }
};