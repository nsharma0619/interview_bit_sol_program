int Solution::trailingZeroes(int A) {
    int count=0,n=1;
    while(A/pow(5,n)!=0)
    {
        count+=A/pow(5,n);
        n++;
    }
    return count;
}
