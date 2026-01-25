class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
      
        
        int ans=-1;
        int start=0;
        int end=arr.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(arr[mid]>x){
                
                end=mid-1;
            }
         else if(arr[mid]<=x){
                ans=mid;
               start=mid+1;
            }
           
        }
        
        return ans;
    }
};
