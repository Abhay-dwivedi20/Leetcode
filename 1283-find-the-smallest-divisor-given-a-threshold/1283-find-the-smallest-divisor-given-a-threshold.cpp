class Solution {
    int findMax(vector<int> &nums){
        int high = INT_MIN;
        for(int i = 0 ; i< nums.size();i++){
            if(nums[i]>high) high = nums[i];
        }
        return high ; 
    }
    int thresholdVal(vector<int> &nums , int mid ){
        int sum = 0;
        for(int i = 0 ; i<nums.size(); i++){
            sum+= (nums[i] + mid - 1) / mid;
        }
        return sum ; 
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int high = findMax(nums);
        int ans = -1 ;
        int low = 1 ;
        while(low<=high){
            int mid = low + (high-low)/2;

            if(thresholdVal(nums,mid)<=threshold){
                ans = mid ;
                high = mid - 1 ;
            }
            else{ 
                low = mid +1 ;
            }
        }
        return ans ;
    }
};