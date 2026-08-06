class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx = -1 ;
        int n = nums.size() ;

        //find the dig element 
        for(int i = n - 2 ; i>= 0 ; i-- ){
            if(nums[i]<nums[i+1]){
                idx = i ;
                break ;
            }
        }

        //if the idx = -1 that means this is the last permutation 
        if(idx == -1) {
            reverse(nums.begin(), nums.end());
            return ;
        }

        //swap the dig element index with the its exact bigger element 
        for(int i = n-1 ; i>=0 ;i--) {
            if(nums[idx]<nums[i]){
                swap(nums[i],nums[idx]);
                break;
            }
        }
        reverse(nums.begin()+idx+1 , nums.end());
    }
};