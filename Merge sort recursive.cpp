void merge(int input[],int si,int ei)
{
    int mid=(si+ei)/2;
    int i=si;
    int j=mid+1;
    int k=0;
    
    int ar[ei-si+1];
    
    while(i<=mid && j<=ei)
    {
        if(input[i]>input[j])
        {
            ar[k]=input[j];
            j++;
            k++;
        }
        else if(input[i]<input[j])
        {
            ar[k]=input[i];
            i++;
            k++;
        }
        else
        {
            ar[k]=input[i];
            k++;
            i++;
            ar[k]=input[j];
            k++;
            j++;
        }
    }
    
    while(i<=mid)
    {
        ar[k]=input[i];
        i++;
        k++;
    }
    while(j<=ei)
    {
        ar[k]=input[j];
        j++;
        k++;
    }
    
    for(int p=0;p<si+ei+1;p++)
    {
        input[p]=ar[p];
    }
    
}

void mergeSort(int input[], int size){
	// Write your code here
    int si=0;
    int ei=size-1;
    
    if(si>=ei)
    {
        return;
    }
    int mid=(si+ei)/2;
    
    mergeSort(input,mid+1);
    mergeSort(input+mid+1,ei-mid);
    merge(input,si,ei);
        
}

