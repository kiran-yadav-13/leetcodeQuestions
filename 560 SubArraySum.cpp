class Solution {
public:
    // int subarraySum(vector<int>& nums, int k) {
    //     int count=0;
    //     for(int i=0; i<nums.size(); i++){
    //         int sum=0;
    //         for(int j=i; j<nums.size(); j++){
    //           sum+=nums[j];
    //           if(sum==k) count++;
    //         }
    //     }
    //     return count;
    // }
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> prefixsum;
        prefixsum[0]=1; // Base case: a Subarray sum starting at index 0

        int sum=0, count=0; 
        for(int num: nums){
            sum+=num; // compute running sum
        

        if(prefixsum.find(sum-k) !=prefixsum.end()){
            count+=prefixsum[sum-k]; // add all occurences of (sum-k)
        }

        prefixsum[sum]++;
        }
          return count;
    }
  



};
