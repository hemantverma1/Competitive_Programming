class Solution {

public:

    int firstMissingPositive(vector<int>& nums) {

        //We need to use the INDICES to denote if a number is found or not. 

        

        //Firstly make all zeros and negatives as n+1 (out of range)

        int n=nums.size();

        for(int i=0; i<n; i++)

            if(nums[i]<=0)

                nums[i]=n+1;

        

        //mark numbers as found -- if lets say 5 is found -- negate the number lying on (5-1)th index

        for(int i=0; i<n; i++)

            if(abs(nums[i])-1<n && nums[abs(nums[i])-1]>0)

                nums[abs(nums[i])-1]*=-1;

        

        //for(int i=0; i<n; i++)

        //    cout<<nums[i]<<" ";

            

        int i=0; 

        //return that index which has positive number 

        for(; i<n; i++)

            if(nums[i]>0)

                break;

        return i+1;

    }

};
