class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        bool ans=true;
        for(int i=1; i<arr.size()-1; i++){
            if(arr[i]>=arr[i-1]){
                ans=true;
            }else{
                return false;
            }
        }
        return ans;
    }
};
