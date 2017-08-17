class Solution {

public:

    vector<int> searchRange(vector<int>& nums, int target) {

        int lo=0, hi=nums.size()-1, mid;

        vector<int> ans(2, -1);

        if(nums.empty()) return ans;

        while(lo<hi){

            mid=lo+(hi-lo)/2;

            if(nums[mid]==target) hi=mid;

            else if(nums[mid]<target) lo=mid+1;

            else hi=mid-1;

        }

        //cout<<lo<<" "<<hi<<endl;

        if(nums[lo]!=target) return ans;

        ans[0]=lo;

        hi=nums.size()-1;

        while(lo<hi){

            mid=lo+(hi-lo)/2+1;

            if(nums[mid]>target) hi=mid-1;

            else lo=mid;

        }

        //cout<<lo<<" "<<hi<<endl;

        ans[1]=hi;

        return ans;

    }

};
