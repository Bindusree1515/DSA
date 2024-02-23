// 1
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // we hv brute approach where we can keep 2 for loops
        // for this we use hasing
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            int more = target - num;
            if(mpp.find(more)!=mpp.end()){
                return {mpp[more],i};
            }
            mpp[num] = i;//indexes
        }
        return {-1,-1};
    }
};
