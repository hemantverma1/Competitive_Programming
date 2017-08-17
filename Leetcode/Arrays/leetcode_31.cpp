ass Solution {

public:

    void nextPermutation(vector<int>& nums) {

        int i=nums.size()-1, prev=-1;

        if(i<0) return;

        while(i>=0 && nums[i]>=prev){

            prev=nums[i];

            i--;

        }

        if(i<0){

            reverse(nums.begin(), nums.end()); 

            return;

        }

        //need to find the smallest number in right side of i which is bigger than i 

        int right=i+1;

        for(int j=i+1; j<nums.size(); j++){

            if(nums[j]>nums[i] && nums[j]<nums[right])

                right=j;

            else if(nums[j]<nums[i]) break;

        }

        

        //swapping 

        int tmp=nums[right];

        nums[right]=nums[i];

        nums[i]=tmp;

        sort(nums.begin()+i+1, nums.end());

    }

};
