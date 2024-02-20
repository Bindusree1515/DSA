//two pointer approach
//similarly as move remove duplicates
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j =0,s1=nums.size();
        for(int i = 0 ; i<nums.size();i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++; 
            }
        }
        // 0 1 0 3 12
        // 0 1 2 3  4 indexes
        // 1 3 12 0 0

        // int s2=nums.size(); for(i=s2 is wrong)
        for(int i = j ; i<nums.size();i++){
            nums[i]=0;
        }
    }
};
