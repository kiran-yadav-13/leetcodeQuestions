class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[i-1]){
                nums[n] = nums[i];
                n+=1;
            }
        }
        return n;
    }
};
