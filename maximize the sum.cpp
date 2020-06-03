// Ques: Given 2 sorted arrays (in increasing order), find a path 
// through the intersections that produces maximum sum and return the maximum sum.
// That is, we can switch from one array to another array only at common elements.
// If no intersection element is present, we need to take sum of all
// elements from the array with greater sum.


long maxPathSum(int ar1[], int ar2[], int m, int n)
{
    /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
     */
    
    int i=0;
    int j=0;
    long maxsum=0;
    long s1=0;
    long s2=0;
    
    for(i,j;i<m && j<n;)
    {
        if(ar1[i]<ar2[j])
        {
            s1=s1+ar1[i];
            i++;
        }
        else if(ar1[i]>ar2[j])
        {
            s2=s2+ar2[j];
            j++;
        }
        else
        {
            s1=s1+ar1[i];
            s2=s2+ar2[j];
            i++;
            j++;
            if(s1>s2)
            {
                maxsum=maxsum+s1;
            }
            else
            {
                maxsum=maxsum+s2;
            }
            s1=0;
            s2=0;
        }
    }
       
    if(i<m)
    {
        while(i<m)
        {
            s1=s1+ar1[i];
            i++;
                
        }
    }
    if(j<n)
    {
        while(j<n)
        {
            s2=s2+ar2[j];
            j++;
        }
    }
    
    if(s1>s2)
    {
        maxsum=maxsum+s1;
    }
    else
    {
        maxsum=maxsum+s2;
    }
    
    return maxsum;
}

