class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
      sort(begin(nums),end(nums));
      int low=0;
      int high=nums.size()-1;
      int first=-1,last=-1;
      while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            first=mid;
            high=mid-1;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
      }
      low=0,high=nums.size()-1;
      while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            last=mid;
            low=mid+1;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
      } 
      if(first==-1) return {};
      vector<int>ans;
      for(int i=first;i<=last;i++){
        ans.push_back(i);
      }  
      return ans;
    }
};