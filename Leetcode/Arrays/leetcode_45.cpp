class Solution {

public:

    int jump(vector<int>& nums) {

        if(!nums.size() || nums.size()==1)

            return 0;

        vector<int> jumps(nums.size(), INT_MAX);

        jumps[0]=0;

        

        int maxReached=0;

        for(int i=0; i<nums.size(); i++){

            if(i+nums[i]>=nums.size()-1)

                return jumps[i]+1;

            for(int j=nums[i]; i+j>maxReached; j--) {

                if(i+j<nums.size() && jumps[i]+1<jumps[i+j])

                    jumps[i+j] = jumps[i]+1;

            }

            maxReached = i+nums[i];

        }

        return jumps[nums.size()-1];    

    }

};
