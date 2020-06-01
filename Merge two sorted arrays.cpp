// Ques: Given two sorted arrays of Size M and N respectively, 
// merge them into a third array such that the third array is also sorted.


void merge(int arr1[], int size1, int arr2[], int size2, int ans[]){
    
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Save the merged array in ans[] array passed as argument.
     * Don't return or print anything.
     * Taking input and printing output is handled automatically.
     */
    
    int k=0,i=0,j=0;
     
    for(i,j;i<size1 && j<size2;)
    {
        if(arr1[i]<arr2[j])
        {
            ans[k]=arr1[i];
            i++;
            k++;
        }
        else if(arr1[i]>arr2[j])
        {
            ans[k]=arr2[j];
            j++;
            k++;
        }
        else
        {
            ans[k]=arr1[i];
            k++;
            ans[k]=arr2[j];
            k++;
            i++;
            j++;
        }
    }
    
    if(i<size1)
    {
        while(i!=size1)
        {
            ans[k]=arr1[i];
            k++;
            i++;
        }
    }
	
    if(j<size2)
    {
        while(j!=size2)
        {
            ans[k]=arr2[j];
            k++;
            j++;
        }
    }
    
}
