class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size() ;
        if(n==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];

        int st = 1 ;
        int end = n - 2 ;   

        while(st<=end){
            int mid = st + (end-st)/2 ;
            
            //check for the prev and next element wether is it same or not 
            if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1]) return nums[mid];

            //check for left half to be eliminated ( if mid odd then its prev would be same OR if it is even then its next would be same if satisfy then eliminate left half)
            if(mid%2==1 && nums[mid]==nums[mid-1] || mid%2==0 && nums[mid]==nums[mid+1]){
                st = mid + 1;
            }

            //if left half doesn't eliminate then the single element must be in left half so eliminate right half 
            else {
                end = mid - 1;
            }
        }
        return -1 ;
    }
};