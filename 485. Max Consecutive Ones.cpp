class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOne=0;
        int cnt=0;
        for(int i=0; i<nums.size(); i++){
         if(nums[i]==1){
            cnt++;
         }else{
            maxOne=max(maxOne,cnt);
            cnt=0;
         }
        }
        maxOne=max(maxOne,cnt);
        return maxOne;
    }
};
