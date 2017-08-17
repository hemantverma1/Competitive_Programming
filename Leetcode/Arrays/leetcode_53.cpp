class Solution {

public:

    int maxSubArray(vector<int>& nums) {

        int ans=nums[0], curr=nums[0];

        for(int i=1; i<nums.size(); i++){

            curr=max(curr+nums[i], nums[i]);

            ans=max(ans, curr);

        }

        return ans;

    }

};
