// 75
class Solution {
public:
    void sortColors(vector<int>& nums) {
        // nlogn worst case can be even n^2
        sort(nums.begin(),nums.end());
    }
};
