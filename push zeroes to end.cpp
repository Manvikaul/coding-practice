// Ques: Given a random integer array, push all the zeros that are present 
// to end of the array. The respective order of other elements should remain same.
// Change in the input array itself. 
// You don't need to return or print elements. Don't use extra array.

// arr - input array
// n - size of array

void PushZeroesEnd(int arr[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to return or print the output.
     * Taking input and printing output is handled automatically.
     */
    
    int s=0;
    
    for(int i=0;i<n;)
    {
        if (arr[i]!=0)
        {
            int temp=arr[i];
            arr[i]=arr[s];
            arr[s]=temp;
            
            s++;
            i++;
            
        }
        else
        {
            i++;
        }
    }

}

