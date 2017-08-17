class Solution {

public:

    int removeElement(vector<int>& nums, int val) {

        if(nums.empty()) return 0;

        int i=0, j=nums.size()-1;

        while(i<j && j>=0 && i<nums.size()){

            while(j>=0 && nums[j]==val) j--; //j points to a legal char which can be swapped with val at ith position

            if(i<j){

                if(nums[i]==val){

                    nums[i]=nums[j];

                    j--;

                }

                i++;

            }

        }

        if(j<0) return 0;

        return nums[j]==val?j:j+1;

    }

    

    

};
