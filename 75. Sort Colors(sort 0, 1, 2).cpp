class Solution {
public:
    void sortColors(vector<int>& nums) {
        //DUTCH NATIONAL FLAG ALGORITHM

        //we considering an array with 0.....low-1,low...mid-1,mid...high...n
        //elements from 0.....low-1 is 0
        // elements from low...mid-1 is 1
        //elemnts from mid...high is unsorted
        // elements from high+1...n is 2
        int low=0, mid=0, high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low], nums[mid]);
                mid++;
                low++;
            }else if(nums[mid]==1){
                mid++;
            }else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};
