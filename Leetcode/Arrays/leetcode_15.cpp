class Solution {

public:

    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;

        int n=nums.size();

        for(int k=0; k<n; k++){

            while(k && k<n && nums[k]==nums[k-1]) k++;

            if(k<n){

                //applying 2 sum here

                int i=k+1, j=n-1, sum, target=-nums[k];

                vector<int> t(3);

                //cout<<"k:"<<k<<endl;

                while(i<j){

                    //cout<<i<<" "<<j<<endl;

                    sum=nums[i]+nums[j];

                    if(sum==target){

                        t[0]=nums[k]; t[1]=nums[i]; t[2]=nums[j]; 

                        ans.push_back(t);

                        i++;

                        j--;

                        while(i<n&&nums[i]==nums[i-1]) i++;

                        while(j>=0&&nums[j]==nums[j+1]) j--;

                    }

                    else if(sum>target) {

                        j--;

                        while(j>=0&&nums[j]==nums[j+1]) j--;

                    }

                    else {

                       i++; 

                       while(i<n&&nums[i]==nums[i-1]) i++;

                    }

                }

            }

        }

        return ans;

    }

};
