class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //Approach 1
        // in this solution we know that the xor of same number is 0 and the 0^num=num
        int num=0;
        // for(int i=0; i<nums.size(); i++){
        //     num=nums[i]^num;
        // }

        //Approach 2
    map<int,int> m;
    for(int i=0; i<nums.size(); i++){
        if(m.count(nums[i])>0){
        m[nums[i]]++;
        }else{
            m.insert({nums[i],1});
        }
    }
    for(auto it:m){
        if(it.second==1){
            num=it.first;
        }
    }
        return num;
    }
};
