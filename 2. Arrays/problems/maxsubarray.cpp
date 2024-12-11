int Solution::maxSubArray(const vector<int> &A) {
    int maxi = INT_MIN;
    int Sum =0;
    for(int i =0;i<A.size();i++){
        if(Sum<0){
            Sum=0;
        }
        Sum+=A[i];
        maxi = max(maxi,Sum);
    }
    return maxi;
}
//khadane algo