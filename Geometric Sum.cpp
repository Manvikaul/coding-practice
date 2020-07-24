//coding ninjas
//Given k, find the geometric sum

#include<math.h>
double geometricSum(int k) {
    // Write your code here
    
    if(k==0)
    {
        return 1;
    }
    
    double sum=geometricSum(k-1);
    return sum+(1/pow(2,k));
}



