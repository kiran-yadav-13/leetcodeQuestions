/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */
   // https://leetcode.com/problems/find-in-mountain-array/
class Solution {
public:
   
  int findPeak(MountainArray &mountainArr){
    int start=0;
    int end=mountainArr.length()-1;

    while(start<end){
        int mid=start+(end-start)/2;
        if(mountainArr.get(mid)>mountainArr.get(mid+1)){
            end=mid;
             // you are in dec part of array
                // this may be the ans, but look at left
                // this is why end != mid - 1
        }else{
            // you are in asc part of array
            start=mid+1; // because we know that mid+1 element > mid element
        }
    }     // in the end, start == end and pointing to the largest number because of the 2 checks above
        // start and end are always trying to find max element in the above 2 checks
        // hence, when they are pointing to just one element, that is the max one because that is what the checks say
        // more elaboration: at every point of time for start and end, they have the best possible answer till that time
        // and if we are saying that only one item is remaining, hence cuz of above line that is the best possible ans
        return start; // or return end as both are =
   
  }
  int BinarySearch(int target, MountainArray &mountainArr, int start, int end, bool asc){
     while(start<=end){
        int mid=start+(end-start)/2;
 
              if(mountainArr.get(mid)>target){
                if(asc){
                    end=mid-1;
                }else{
                    start=mid+1;
                }
              }else if(mountainArr.get(mid)<target){
                  if(asc){
                    start=mid+1;
                }else{
                    end=mid-1;
                }
              }else{
                return mid;
              }
        
      
     }

     return -1;
  }
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int peak=findPeak(mountainArr);
         int ans=BinarySearch(target,mountainArr,0, peak,true );
           // try to search in second half
         if(ans==-1){
            ans=BinarySearch(target,mountainArr,peak,mountainArr.length()-1 ,false );
         }

         return ans;
    }
};
