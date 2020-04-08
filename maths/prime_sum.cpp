bool isprime(long long n)
{
    for(long i=2;i<=n/2;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
vector<int> Solution::primesum(int A) {
    vector<int> B;
    long long temp=A-2;
    while(!(isprime(temp)) || !(isprime(A-temp)))
    {
        temp--;
    }
    B.push_back(A-temp);
    B.push_back(temp);
    return B;
}
