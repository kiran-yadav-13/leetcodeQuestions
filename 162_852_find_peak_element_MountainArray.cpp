class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       // Mountain/Biotonic Array- first Increases thn dcreases
       //finding peak- find maximum element in array
    int start=0;
    int end=arr.size()-1;
    while(start<end){
       
        int mid=start+(end-start)/2;

        //if we are in dscending part of the array
        if(arr[mid]>arr[mid+1]){
          // since we are trying to find the greater element in descending part->we know mid can be the answer but ther can be more element in the left side which is greater or may be there is no greater element -> thats why e!=mid+1
          end=mid;
        }else if(arr[mid]<arr[mid+1]) {
            //in ascending part of the array
            start=mid+1;
            // as we know the mid+1 is greater than mid and we are trying to find greater element so thats why s!=mid
        }
    }
        return start;
    }

    // in the end the start and end will point to the same element(becoz of the 2 checks in while loop(s and e always trying to find the maximum element and hence when both element is pointing to the same element then its the answer)) which is the maximum element of the array
    // so we can return e or s

};
