class Solution {

public:

    int searchInsert(vector<int>& nums, int target) {

        if(nums.empty()) return 0;

        int lo=0, hi=nums.size(), mid;

        if(!hi) 

            return nums[0]>=target?0:1;

        while(lo<hi){

            mid=lo+(hi-lo)/2; 

            if(nums[mid]==target) return mid;

            else if(nums[mid]>target) hi=mid;

            else lo=mid+1;

        }

        return lo;

    }

};
