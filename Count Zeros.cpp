//coding ninjas
//Given an integer N, count and return the number of zeros that are present in the given integer using recursion.

int countZeros(int n) {
    // Write your code here
    
    if(n==0)
    {
        return 0;
    }
        
    int ans=countZeros(n/10);
    if(n%10==0)
    {
        return ans+1;
    }
    else
    {
        return ans;
    }

}



