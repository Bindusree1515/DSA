// sum= (n*(n+1))/2; 268
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,n=nums.size(),suma=0;
        sum= (n*(n+1))/2;
        for(int i=0;i<nums.size();i++){
            suma=suma+nums[i];
        }
        return sum-suma;
    }
};
