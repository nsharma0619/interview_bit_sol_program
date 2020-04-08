int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int top=0,bottom=A.size()-1,left=0,right=A[0].size()-1;
    int ans_row=0,ans_col=0;
    while(bottom-top>1)
    {
        ans_row=(top+bottom)/2;
        if(B<A[ans_row][0])
            bottom=ans_row;
        else
            top=ans_row;
    }
    if(B<A[bottom][0] && bottom>=1)
        ans_row=bottom-1;
    else
        ans_row=bottom;
    while(right-left>1)
    {
        ans_col=(left+right)/2;
        if(B<A[ans_row][ans_col])
            right=ans_col;
        else
            left=ans_col;
    }
    if(A[ans_row][left]==B || A[ans_row][right]==B)
        return 1;
    else
        return 0;
}
