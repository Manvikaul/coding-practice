//Interviewbit
//Ques: Given an array of integers, A of length N, find out the maximum sum sub-array of non negative numbers from A.
//The sub-array should be contiguous i.e., a sub-array created by choosing the second and fourth element and skipping the third element is invalid.
//Maximum sub-array is defined in terms of the sum of the elements in the sub-array.
//Find and return the required subarray.

using ll = long long;

vector<int> Solution::maxset(vector<int> &A) {
    ll n = A.size();
    ll x=0, y=0, s=0, mx=0, my=0, ms=0;
    for(ll i=0;i<n;i++){
        if(A[i]<0) x=i+1, y=i+1, s=0;
        else {
            s+=A[i], y++;
            if(s>ms || ms>=s && mx==x)
                ms=s, mx=x, my=y;
        }
    }
    vector<int> V(A.begin()+mx, A.begin()+my);
    return V;
}
