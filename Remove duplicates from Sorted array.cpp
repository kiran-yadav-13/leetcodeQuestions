class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        // set <int> s;
        // for(int i=0; i<arr.size(); i++){
        //     s.insert(arr[i]);
        // }
        // int count;
        // vector<int> newarr;
        // for(auto it=s.begin(); it!=s.end(); it++){
        //     newarr.push_back(*it);
        // }
        // return newarr;
        vector<int>newArr;
        newArr.push_back(arr[0]);
        for(int i=1; i<arr.size(); i++ ){
            if(arr[i]!=arr[i-1] ){
               newArr.push_back(arr[i]);
            }
        }
        return newArr;
    }
};
