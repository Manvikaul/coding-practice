// Ques: Given an integer array A of size n. 
//     Find and print all the leaders present in the input array. 
//     An array element A[i] is called Leader, if all the elements
//     following it (i.e. present at its right) are less than or equal to A[i].
//     Print all the leader elements separated by space and in the
//     same order they are present in the input array.

void Leaders(int* arr,int len)
{
	/* Don't write main().
	 * Don't read input, it is passed as function argument.
	 * Print your output exactly in the same format as shown. 
	 * Don't print any extra line.
	*/
    
    int flag=0;
    
    for(int i=0;i<len;i++)
    {
        for(int j=i;j<len;j++)
        {
            if(arr[j]>arr[i])
            {
                flag=1;
                break;
            }
        }
        
        if(flag==0)
        {
            cout<<arr[i]<<" ";
        }
        flag=0;
    }
}

