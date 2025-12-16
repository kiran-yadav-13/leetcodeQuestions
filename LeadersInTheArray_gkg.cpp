

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // BRUTE FORCE
        // for every elemnt i we will check whether the there is elemnt grater than arr[i] exsist in the right of the array
        //if greater elemnt exsist it is not the leader
        //if not then it is the leader
        vector<int>ans;
    //   for(int i=0; i<arr.size(); i++){
    //       int leader=true;
    //       for(int j=i+1; j<arr.size(); j++ ){
    //           if(arr[j]>arr[i]){
    //               leader=false;
    //               break;
    //           }
    //       }
    //       if(leader==true){
    //           ans.push_back(arr[i]);
    //       }
         
    //   }
    
    //OPTIMAL Approach
    // start from the back of the array [16, 17, 4, 3, 5, 2] if the max till index 3 from the back is 3 and for the current index 2 having the array element
    //array element 4 is grater thean the max till now from the right then it will become the leader as we know the leader-is the gratest elemnt in the right 
    
    int min=INT_MIN;
       
       for(int i=arr.size()-1; i>=0; i--){
           if(arr[i]>=min){
               min=arr[i];
               ans.push_back(arr[i]);
           }
       }
     reverse(ans.begin(),ans.end());
       
       return ans;
    }
};
