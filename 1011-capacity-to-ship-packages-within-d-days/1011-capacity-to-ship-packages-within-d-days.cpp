class Solution {
    int minDays(vector<int>& nums, int mid){
        int days = 1 ;
        int sum = 0 ;
        for(int i =0 ; i<nums.size(); i++){
            sum+=nums[i];
            if(sum>mid){
                days+=1;
                sum = nums[i] ;
            }
        }
    return days ;
    }
public:
    int shipWithinDays(vector<int>& nums, int days) {
        int low = *max_element(nums.begin(),nums.end());
        long long  high = accumulate(nums.begin(), nums.end(), 0);
        int ans = -1;

        while(low<=high){
            int mid = low + (high - low)/2 ;
            if(minDays(nums,mid)<=days){
                high = mid - 1;
                ans = mid ;
            }
            else {
                low = mid + 1 ;
            }
        }
        return ans ; 
    }
};