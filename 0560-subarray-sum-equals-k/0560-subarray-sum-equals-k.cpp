class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mapp;
        int prefix = 0 ; 
        int count = 0 ;
        mapp[0]=1;

        for(int i =0 ; i<nums.size();i++){
            prefix+=nums[i];
            int remove = prefix - k ;
            count += mapp[remove];

            mapp[prefix] ++ ;

        }
        return count ; 
    }
};