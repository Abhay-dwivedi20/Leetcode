class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini = INT_MAX;
        int st = 0 ;
        int end= nums.size() - 1 ;
        while(st<= end){
            int mid = st + ( end - st)/2;
            mini = min(mini,nums[mid]);
            
            if(nums[st]<=nums[end]) return min(nums[st],mini);

            else if(nums[st]<=nums[mid]){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
            
        }
        return mini ; 
    }
};