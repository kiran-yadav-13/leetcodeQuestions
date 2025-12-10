class Solution {
public:
    int majorityElement(vector<int>& nums) {
          int n = nums.size();

        for(int i = 0; i < n; i++) {
            int count = 0;

            // Count occurrences of nums[i]
            for(int j = 0; j < n; j++) {
                if(nums[j] == nums[i]) {
                    count++;
                }
            }

            // Check if majority
            if(count > n / 2) {
                return nums[i];
            }
        }

        return -1;  
     //BruteForce Approach - time Complexity- O(Nlogn)+O(n)
    //  int ans=-1;
    //   unordered_map <int,int> m;
    //  for(int i=0; i<nums.size(); i++){
    //    if(m.find(nums[i])==m.end()){
    //         m[nums[i]]=1;
    //    }else{
    //     m[nums[i]]++;
    //    }
    //  }
    //  for(int i=0; i<nums.size(); i++){
    //     if(m[nums[i]]>nums.size()/2){
    //         ans=nums[i];
    //     }
    //  }

//More's voting algorith
// Majority element appears more than half.
// Every time it meets a non-majority element, they “cancel out.”
// Since majority > all others combined, it survives the cancellation.
    // int cnt=0;
    // int el=0;
    // for(int i=0; i<nums.size(); i++){
    //     if(cnt==0){
    //         cnt=1;
    //         el=nums[i];
    //     }
    //     else if(nums[i]==el){
    //         cnt++;
    //     }else{
    //         cnt--;
    //     }
    // }
    //  return el;
    }
 };
