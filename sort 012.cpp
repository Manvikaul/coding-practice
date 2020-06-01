// Ques: You are given an integer array containing only 0s, 1s and 2s.
//       Write a solution to sort this array using one scan only.
//       You need to change in the given array itself. 
//       So no need to return or print anything.

// arr - input array
// n - size of array

void sort012(int arr[], int n)  {  
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output.
     * Taking input and printing output is handled automatically.
     */
    
    int s=0;
    int e=n-1;
    
    for(int i=0;i<=e;)
    {
        if(arr[i]==1)
        {
            i++;
        }
        else if(arr[i]==0)
        {
            int temp=arr[i];
            arr[i]=arr[s];
            arr[s]=temp;
            
            s++;
            i++;     
        }
        else if(arr[i]==2)
        {
            int temp=arr[i];
            arr[i]=arr[e];
            arr[e]=temp;
            
            e--;
        }
    }

}

