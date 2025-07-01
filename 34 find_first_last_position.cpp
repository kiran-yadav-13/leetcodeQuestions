class Solution {
public:
   int Search(vector<int>& nums, int target, bool firstPosition){
    int start=0;
    int end=nums.size()-1;
    int ans=-1;

    while(start<=end){
        int mid=start+(end-start)/2;

        if(nums[mid]>target){
            end=mid-1;
        }else if(nums[mid]<target){
            start=mid+1;
        }else{
            ans=mid;
            if(firstPosition){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
    }
    return ans;
   }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans={-1,-1};
        ans[0]=Search(nums, target, true);
        if(ans[0]!=-1){
            ans[1]=Search(nums,target,false);
        }
        return ans;
    }
};
