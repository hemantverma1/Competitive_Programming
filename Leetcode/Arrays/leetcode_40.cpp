ass Solution {

public:

    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {

        vector<vector<int>> ans;

        sort(arr.begin(), arr.end());

        vector<int> partialAns; 

        recur(ans, arr, arr.size()-1, target, partialAns);

        return ans;

    }

    

    void recur(vector<vector<int>>& ans, vector<int>& arr, int i, int target, vector<int>& partialAns){

        //cout<<i<<" "<<target<<endl;

        if(target==0){

            ans.push_back(partialAns); return;

        }

        if(i<0||target<0) return;

        partialAns.push_back(arr[i]); 

        recur(ans, arr, i-1, target-arr[i], partialAns);

        partialAns.pop_back();

        while(i-1>=0 && arr[i-1]==arr[i]) i--;

        recur(ans, arr, i-1, target, partialAns);

    }

};
