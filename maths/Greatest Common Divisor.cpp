int Solution::gcd(int A, int B) {
    if(A%B==0)
        return B;
    else
        return gcd(B,A%B);
}
