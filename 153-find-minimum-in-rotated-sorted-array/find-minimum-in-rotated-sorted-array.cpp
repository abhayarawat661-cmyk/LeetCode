class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0,end=nums.size()-1,ans=nums[0],mid;
        while(start<=end){
            mid=start+(end-start)/2;
        //right side sorted    
            if(nums[mid]<nums[end]){
                ans = min(ans, nums[mid]);
                end=mid-1;

            }
            else if(nums[mid]>nums[end]){
                 ans = min(ans, nums[start]);
                start=mid+1;

            }
            else{
            ans = min(ans, nums[end]);
            end--;
            }
        }
        return ans;
    }
};