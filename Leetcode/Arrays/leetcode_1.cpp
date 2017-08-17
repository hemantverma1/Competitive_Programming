class Solution {

public:
    vector<int> twoSum(vector<int>& num, int target) {
        vector<int> ans;
        vector<pair<int, int> > n(num.size());
        for(int i=0; i<num.size(); i++)
            n[i]=make_pair(num[i], i);
		sort(n.begin(), n.end());
		int i=0, j=num.size()-1, sum;
		while(i<j){
		    sum=n[i].first+n[j].first;
		    if(sum==target) {ans.push_back(n[i].second); ans.push_back(n[j].second); break;}
		    else if(sum>target) j--;
		    else i++;
		}
		return ans;
    }
};
