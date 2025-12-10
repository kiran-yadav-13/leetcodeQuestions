class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //BRUTE FORCE Approach: -o(n^2)
        // int sum=0;
        // int maxSum=INT_MIN;
        // for(int i=0; i<nums.size(); i++){
        //     sum=0;
        //     for(int j=i; j<nums.size(); j++){
        //         sum+=nums[j];
        //         maxSum=max(maxSum,sum);
        //     }
        // }
        // return maxSum;

        //KADANE ALGORITHM-o(n)
        // at every step we have 2choice either to extend the array or to start the fresh
        // if the sum is positive then extend the array
        // if the sum is negative - there is not point of extending it further as it only going to hurt(decrease sum) of future extended subarray, so make it 0 and start frseh
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
           //but in case the arrsy having all the negative integers, it is important to update the maximum first before making the sum 0, otherwise it will give the maxi 0 not the actual maximum sum among all the elemnts 
            if(sum>maxi){
                maxi=sum;
            }
             if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};
