class Solution {
public:
    bool helper(int cap,vector<int>&weights,int days){
        int day=1;
        int count=0;
        for(int weight:weights){
            if(cap>=count+weight){
            count+=weight;
            }
            else{
                day++;
                count=0;
                count=weight;
                if(days<day){
                    return false;
                }
            }
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());;
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<high){
            int mid=low+(high-low)/2;
            if(helper(mid,weights,days)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};