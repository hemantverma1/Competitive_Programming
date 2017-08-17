ass Solution {

public:

    int search(vector<int>& n, int target) {

        if(n.empty()) return -1;

        int lo=0, hi=n.size()-1, mid;

        while(lo<=hi){

            if(lo==hi-1){

                if(target==n[lo]) return lo;

                if(target==n[hi]) return hi;

                return -1;

            }

            mid=lo+(hi-lo)/2;

            if(n[lo]>n[hi]){ //rotated array

                if(n[lo]<n[mid]){ //mid is in left sorted subarray of rotated array

                    if(n[lo]<=target && target<=n[mid]) hi=mid;

                    else lo=mid;

                }

                else{ //mid is in right sorted subarray of rotated array

                    if(n[mid]<=target && target<=n[hi]) lo=mid;

                    else hi=mid;

                }

            }

            else{ //normal sorted array - chup chaap binary search lga do

                if(n[mid]==target) return mid;

                else if(n[mid]>target) hi=mid-1;

                else lo=mid+1;

            } 

        }

        return -1;

    }

};
