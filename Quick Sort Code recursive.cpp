int partition(int input[],int si,int ei)
{
    int x=si;
    int count=0;
    for(int i=si+1;i<=ei;i++)
    {
        if(input[i]<input[x])
        {
            count++;
        }
    }
    
    long temp=input[x];
    input[x]=input[si+count];
    input[si+count]=temp;
    
    int i=si;
    int j=ei;
    
    while(i<count+si && j>count+si)
    {
        if(input[i]<input[si+count])
        {
            i++;
        }
        else if(input[j]>=input[si+count])
        {
            j--;
        }
        else
        {
            int temp=input[i];
            input[i]=input[j];
            input[j]=temp;
            i++;
            j--;
        }
    }
    
    return (si+count);
}

void qs(int input[],int si,int ei)
{
    if(si>=ei)
    {
        return;
    }
    
    int c=partition(input,si,ei);
    
    qs(input,si,c-1);
    qs(input,c+1,ei);
}


void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    
    int si=0;
    int ei=size-1;
    
    qs(input,si,ei);

}

