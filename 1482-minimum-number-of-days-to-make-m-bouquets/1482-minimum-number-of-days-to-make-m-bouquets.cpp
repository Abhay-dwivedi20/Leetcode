class Solution {
    int NumBouquet(vector<int>& nums, int mid,int k ){
        int count = 0 ;
        int numofB=0;
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i] <= mid){
                count++;
            }
            else{
                numofB+=count/k;
                count=0;
            }
        }
        numofB+=count/k;

        return numofB;

    }
public:
    int minDays(vector<int>& nums, int m, int k) {
        int ans = -1;
        if(nums.size() < (long long)m * k) return ans;
        int low = *min_element(nums.begin(), nums.end()); 
        int high = *max_element(nums.begin(), nums.end()); 
        
        while(low<=high){
            int mid = low + (high-low)/2;
            if(NumBouquet(nums,mid,k)>=m){
                high=mid-1;
                ans=mid;
            }
            else{
                low= mid+1;
            }
        }
        return ans ;
    }
};