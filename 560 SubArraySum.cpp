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
        // in the array (..l-1,l..r)that has currentsum =sum
        //some elemnts add upto give the sum k (l....r)
        // some elemnts before this sum adds upto give sum-k  (....l-1)
        
       // i = 1 (element = 2)
// sum = prefix[1] = 3
// need = sum - k = 3 - 3 = 0
// Do we have any earlier prefix with value 0? Yes — at index -1 (the empty prefix).
// Each earlier prefix index j where prefix[j] == need gives a subarray j+1 .. i
// Here j = -1 → subarray (-1 + 1) .. 1 = 0 .. 1 → [1, 2]
// So we found one subarray: indices 0 to 1.
//unordered_map- due to its lookup time is O(1)
       unordered_map<int, int>freq; //store the count of prefix sum
       int count=0;
       int sum=0; // 
       freq[0]=1;// we are taking 
       for(int i=0; i<nums.size(); i++){
        sum+=nums[i];
        int rem=sum-k;
        if(freq.find(rem)!=freq.end()){
            count+=freq[rem];
        }
        freq[sum]++;
       }
       return count;
    }




};
