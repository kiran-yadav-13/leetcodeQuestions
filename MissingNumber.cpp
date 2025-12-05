class Solution {
public:
    int missingNumber(vector<int>& nums) {
    //     //Approach 1
    //  int max=nums.size();
    //  int s2=0;
    //   for(int i=0; i<nums.size(); i++){
    //     s2+=nums[i];
    //   }
    //   int s1=(max*(max+1))/2;
    //   int no=s1-s2;
    //   return no;

    //Approach2

    //xor1-will calculate the xor of all elements in the array
    //xor2 will calculate the xor of all elements from 1 to n
    // since xor of same elemnts calculated to be 0 for ex- 2^2=0 and 0^2=2
    // so in last we xor xor1 and xor  ... all the non-missing elements will be 0 as they appear to be two times and the missing one will only be 1 time
    int xor1=0, xor2=0;
    for(int i=0; i<nums.size(); i++){
        xor1=xor1^nums[i];
        xor2=xor2^(i+1);
    }
   
    return xor1^xor2;
        }
};
