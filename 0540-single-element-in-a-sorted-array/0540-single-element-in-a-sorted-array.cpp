class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //o(n) o(n)
        unordered_map<int,int>mp;
        for(int i: nums){
            mp[i]++;
        }
        for(auto i: mp){
            if(i.second==1) return i.first;
        }
        return -1;


    }
};