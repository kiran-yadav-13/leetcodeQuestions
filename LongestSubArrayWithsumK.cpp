class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        //Logic there is if till some index of i current sum is x
        //and till some previous index it has sum x-k
        //then from that index to current index the sum is k
       
       // we store the sum till current index in hashmap
       //in hashmap we find x-k sum if found we calculate the length of subarray having sum k and compare it with maxSize
       // and store the sum till current
       
       // but this approach have problem if there is negative integers or the 0 element
       // {2,0,0,0,3} target=3
       //in hashmap 2,0 stored rem=2-3=-1 not found in map
       // then again current sum=2 , again stored-updated the entry 
       //till index=3 entry in hashmap=2,3
       //index=4 finding rem=5-3=2 , hasmap of 2 found at index 3 length=4-3=1 
       //but the longest could be {0,0,0,3} having length 4 but due to updating the already exsisting elemnt this problem exsisit
       
       map<long long, int> preSumMap;
       int maxLen=0;
       int sum=0;
       for(int i=0; i<arr.size(); i++){
           sum+=arr[i];
           if(sum==k){
               maxLen=max(maxLen, i+1);
           }
           long long rem=sum-k;
           if(preSumMap.find(rem)!=preSumMap.end()){
               int len=i-preSumMap[rem];
               maxLen=max(maxLen,len);
           }
           if(preSumMap.find(sum)==preSumMap.end()){
               preSumMap[sum]=i;
           }
       }
       return maxLen;
       
    }
};
