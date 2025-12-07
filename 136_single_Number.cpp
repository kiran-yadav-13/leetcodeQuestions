class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // in this solution we know that the xor of same number is 0 and the 0^num=num
        int num=0;
        for(int i=0; i<nums.size(); i++){
            num=nums[i]^num;
        }
        return num;
    }
};
