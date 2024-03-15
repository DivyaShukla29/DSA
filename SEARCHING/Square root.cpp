// traversing through 1 to x
int mySqrt(int x) {
        if (x<=1){
            return x;
        }
    long long high = x/2;
   long long low =1;
    int res=-1;

     while (low<=high){
        long long mid = low+(high-low)/2;
       long long t=mid*mid;
        if (t==x){
            return mid;
        }
        else if (t>x){
            high = mid-1;
        }
        else{
            low =mid+1;
            res= mid;
        }
     }
     return res;
        
    }
