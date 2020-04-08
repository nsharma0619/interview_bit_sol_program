int Solution::sqrt(int A) {
    long long  mid, left, right;
        left =0;
        right=A;
        if(A==1)
            return A;
        while(right-left>1)
        {
            mid=(right+left)/2;
            if(mid*mid==A){
                return mid;
                break;
            }
            if(mid*mid>A)
            {
                right=mid;
            }
            else
                left=mid;
        }
        if(right-left==1)
        {
            mid=(left+right)/2;
            return mid;
        }
}
