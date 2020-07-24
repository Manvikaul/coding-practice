//coding ninjas
//Given an array of length N and an integer x, you need to find and return the first index of integer
// x present in the array. Return -1 if it is not present in the array.

int firstIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    if(size==0)
    {
        return -1;
    }
    if(input[0]==x)
    {
        return 0;
    }
    int index=firstIndex(input+1,size-1,x);
    
    if(index==-1)
    {
        return index;
    }
    else
    {
        return index+1;
    }
    

}

