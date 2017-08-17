class Solution {

public:

    int threeSumClosest(vector<int>& n, int target) {

        sort(n.begin(), n.end());

        int size=n.size(), ans, diff=INT_MAX, currdiff;

        for(int k=0; k<size; k++){

            int i=k+1, j=size-1, sum; 

            while(i<j){

                sum=n[i]+n[j]+n[k]; 

                if(abs(target-sum)<diff){

                    ans=sum;

                    diff=abs(target-sum);

                    if(diff==0) return ans;

                } 

                if(sum>target) j--;

                else i++;

            }

        }

        return ans;

    }

};
