class Solution {
public:
    int reverse(int x) {
        int digit=0;
        int rev=0;
        if(x<0){
        
        }
        while(x!=0){
            digit=x%10;
            if((rev>INT_MAX/10) || (rev==INT_MAX/10 && digit>7)){
                return 0;
            }
             if((rev<INT_MIN/10) || (rev==INT_MIN/10 && digit<(-8))){
                return 0;
            }
            rev=rev*10+digit;
            x=x/10;
        }

        // long r=0;
        //  while(x!=0){
        //     if(r>INT_MAX || r<INT_MIN){
        //         return 0;
        //     }
        //     r=r*10+x%10;
        //     x=x/10;
        //  }
        //  return r;
        // cout<<rev;
        // if(digit!=last){
        //     return 0;
        // }
        return rev;
    }
};
