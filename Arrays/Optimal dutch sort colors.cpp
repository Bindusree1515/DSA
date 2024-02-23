//dutch national flag
// 75
class Solution {
public:
    void sortColors(vector<int>& nums) {
        // nlogn worst case can be even n^2
        // sort(nums.begin(),nums.end());
        int low=0,mid=0;int high=nums.size()-1;
        while (mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;mid++;
            }
            else if(nums[mid] ==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};
