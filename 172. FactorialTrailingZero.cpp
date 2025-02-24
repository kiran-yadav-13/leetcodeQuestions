class Solution {
public:
    int multiple(int n){
        if(n<5){
            return 0;
        }
        return n/5+multiple(n/5);
        
    }
    //from loop
    int multipleOf(int n){
        int count=0;
        while(n>0){
            n=n/5;
            count=count+n;
        }
        return count;
    }
    int factorial(int n){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        return n*factorial(n-1);
    }

    int countZero(int num){

        if(num==0){
            return 0;
        }
        else{
        int digit=0;
        int count=0;
        while(num!=0 ){
            digit=num%10;
            if(digit==0 && num%100!=0){
                count++;
                return count;
            }
            else if(digit==0 && num%100==0){
                 count++;
            }
            num=num/10;
        }
         return count;
        }
       
      
    }
    int trailingZeroes(int n) {
        // int fact=factorial(n);
        // return countZero(fact);

        return multipleOf(n);
    }
};
