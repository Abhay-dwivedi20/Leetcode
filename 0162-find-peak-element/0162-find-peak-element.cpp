class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1) return 0;
        if(nums[0]>nums[1]) return 0 ; 
        if(nums[nums.size()-1]>nums[nums.size()-2]) return nums.size()-1; 

        int st = 0 ; 
        int end = nums.size() - 1 ;
        while(st<=end){
            int mid = st + ( end - st )/2;

            if(nums[mid]>nums[mid-1] && nums[mid]> nums[mid+1]) return mid ;

            else if(nums[mid]>nums[mid-1] && nums[mid]<nums[mid+1]) st = mid + 1 ;
            
            else end = mid ;
        }
        return -1;
    }
};