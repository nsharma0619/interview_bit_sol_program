vector<int> Solution::plusOne(vector<int> &A) {
    int carry=0;
    for(int i=A.size()-1;i>=0;i--){
        if(i==A.size()-1)
            A[i]=A[i]+carry+1;
        else
            A[i]=A[i]+carry;
        carry=A[i]/10;
        A[i]=A[i]%10;
    }
    if(carry!=0){
        reverse(A.begin(), A.end());
        A.push_back(1);
        reverse(A.begin(), A.end());
    }
    reverse(A.begin(), A.end());
    while(A[A.size()-1]==0)
        A.pop_back();
    reverse(A.begin(), A.end());
    return A;
}
