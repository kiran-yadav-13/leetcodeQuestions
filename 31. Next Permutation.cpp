class Solution {
public:
   void reverseArray(vector<int>&nums, int left, int right){
  while(left<=right){
    swap(nums[left], nums[right]);
    left++;
    right--;
  }
   }
//BRUTE FORCE APPRACH
//1. find all permutation-recursion
//2. use linear searc
//3. find the next permutation
   
   //OPTIMAL APPROACH
     // we need to understand that in the dictionary the next elemnt is determined by longest prefix match- the more the match , the closest the elemnt is and we can arrange the other elemts left in the array
     // but for the next permutation the [2,1,5,4,3,0,0]
     // we stRT SCANNING FROM THE RIGHT OF THE ARRAY
     // for 0 - no next permutation possible as no one in its right is grater than 0
     // for 3 also no possible as - possible permutations will be- 003, 300,030 which all are smaller
     //similarly for 4 not possible as no element>4 in right of it
     // smilarly for 5-not possible
     // for 1 the next permutation possible as there is element>1 and observation -5,4,3,0,0 are incrasing and ther is dip at 5 to 1- so we need to find this breakpoint
     // if breaking index is not found its next permutation does not exsist return first permustation so reverse the array
     // possible permutations - 25...,24...,23... but we want next so we nedd smallest element which is grater than 1
     //so we start scanning from right and find first elemnt which is graeter
     // swap it with the breakpoint elemnt and then reverse the rest as we want the next one- which will be smallest greatest elemt

    void nextPermutation(vector<int>& nums) {
      // 3 step
      // 1. find longest prefix nums[i]<nums[i+1]
      //2. find > A, but smallest one , so that we can stay close
    //  3. Try to place num in sorted order

        int index=-1;
        int n=nums.size();
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }
        if(index==-1){
            reverseArray(nums,0,nums.size()-1);
            
        }
    else{
        for(int i=n-1; i>=0; i--){
        if(nums[i]>nums[index]){
            swap(nums[i], nums[index]);
            break;
        }
       }
    reverseArray(nums, index+1, nums.size()-1);
    }
    cout<<"[";
    for(int i=0; i<nums.size(); i++){

         cout<<nums[i];
        if(i!=n-1){
            cout<<",";
        }
       
    }
    cout<<"]";

    }
};
