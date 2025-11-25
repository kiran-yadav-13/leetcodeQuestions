int getSecondLargest(int *arr, int n) {
    // code here
    int largest=arr[0];
    int secondLar=0;
    for(int i=0; i<n; i++ ){
        if(arr[i]>largest  ){
             secondLar=largest;
            largest=arr[i];
        }
        if(arr[i]>secondLar && arr[i]!=largest){
            secondLar=arr[i];
        }
        
    }
    
    return secondLar;
}
