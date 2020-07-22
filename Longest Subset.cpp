#include<unordered_map>
int max(int arr[], int n) {
	/* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    
    int length=0;
    int maxlength=0;
    int count0=0;
    int count1=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++) 
        {
            if(arr[j]==1)
            {
                count1++;
            }
            if(arr[j]==0)
            {
                count0++;
            }
            if(count1==count0)
            {
                length=count1+count0;
                if(length>maxlength)
                {
                    maxlength=length;
                }
            }
        }
        length=0;
        count0=0;
        count1=0;
    }
    return maxlength;
    
}
    
    
    
    
    
    
  /*
   unordered_map<int,int>mymap;
    
    for(int i=0;i<n;i++)
    {
       mymap[arr[i]]++; 
    }
    
    if(mymap.count(0)>0 && mymap.count(1)>0)
    {
        if(mymap.at(0)==mymap.at(1))
        {
            return n;
        }
        else if(mymap.at(0)>mymap.at(1))
        {
            
        }
    }
    else
    {
        return 0;
    }
}



 int length;
    int maxlength=0;
    
    unordered_map<int,int>mymap;
    
    for(int i=0;i<n;i++)
    {
        mymap[arr[i]]++;
        if(mymap.count(1)>0 && mymap.count(0)>0)
        {
            if(mymap.at(0)==mymap.at(1))
            {
                length=2*mymap.at(0);
                if(length>maxlength)
                {
                    maxlength=length;
                }
            }
        }
    }
*/
