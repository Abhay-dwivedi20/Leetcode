class Solution {
    int findMax(vector<int> &nums){
        int high = INT_MIN;
        for(int i = 0 ; i< nums.size();i++){
            if(nums[i]>high) high = nums[i];
        }
        return high ; 
    }
    long long  EatingSpeed(vector<int> &nums , int mid ){
        long long  speed = 0;
        for(int i = 0 ; i<nums.size(); i++){
            speed+= (nums[i] + mid - 1) / mid;
        }
        return speed ; 
    }
public:
    int minEatingSpeed(vector<int>& nums, int h) {
        int high = findMax(nums);
        int ans = -1 ;
        int low = 1 ;
        while(low<=high){
            int mid = low + (high-low)/2;

            if(EatingSpeed(nums,mid)<=h){
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