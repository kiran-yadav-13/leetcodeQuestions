class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        //Approach1 
        // for(int i=0; i<nums.size(); i++ ){
        //     for(int j=i+1; j<nums.size(); j++){
        //         if(nums[i]+nums[j]==target){
        //             ans.push_back(i);
        //              ans.push_back(j);
        //              return ans;
        //         }
        //     }
        // }

        //Approach2
        // map<int, int> m;
        // for(int i=0; i<nums.size(); i++){
        //     if(m.find(target-nums[i])!=m.end()){
        //         return {i,m[target-nums[i]]};
        //     }
        //     m[nums[i]]=i;
        // }

        //Approach 3
   
        vector<pair<int,int>> v;
        for(int i=0; i<nums.size(); i++){
            v.push_back({nums[i],i});
        }
         int i=0;
        int j=v.size()-1; 
        sort(v.begin(), v.end());
        int sum=0; 
        while(i<j){
            sum=v[i].first+v[j].first;
            if(sum==target){
                return {v[i].second,v[j].second};
            }
            else if(sum>target){
                j--;
            }
            else if (sum<target){
                i++;
            }
           
        }
        return {-1,-1};
    }
};
