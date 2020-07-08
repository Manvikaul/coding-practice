#include <vector>
#include<iostream>
#include<unordered_map>
using namespace std;

vector<int> longestConsecutiveIncreasingSequence(int *arr, int n){
	//Your Code goes here
    int length;
    int maxlength=1;
    int s=0;
    int start=0;
    int position_s;
    int position_start;
    int initial=arr[0];
    vector<int>output;
    
     unordered_map<int,bool>mymap;
    
    for(int i=0;i<n;i++)
    {
        mymap[arr[i]]=true;
    }
    for(int i=0;i<n;i++)
    {
       // if(mymap.count(arr[i])>0)
       // {
        if(mymap[arr[i]]==true)
        {
         int var1=0,var2=0;
         length=1;
         int k=arr[i];
         int start=arr[i];
         mymap[k]=false;
         while(mymap.count(k+1)>0)
         {
         mymap[k+1]=false;
         k++;
         length++;
         }
         while(mymap.count(start-1)>0)
         {
         mymap[start-1]=false;
         start--;
         length++;
         }
         if(length>maxlength)
         {
         maxlength=length;
         initial=start;
         }
         else if(length==maxlength)
         {
         for(int k=0;k<n;k++)
         {
         if(arr[k]==start && var1==0)
         {
         var1=k;
         }
         else if(arr[k]==initial && var2==0)
         {
         var2=k;
         }
         }
         if(var1<var2)
         {
         maxlength=length;
         initial=start;
         }
         }
        }
        else 
        {
        continue;
        }
    
        }
        //}
        for(int i=initial;i<initial+maxlength;i++)
        {
        output.push_back(i);
        }
        return output;
   
}




/*

    
     
        
        
    
    unordered_map<int,bool>::iterator it;
    it=seq.begin();
    while(it!=seq.end())
    {
        for(int j=0;seq.count((it->first)+j)>0;j++)
        {
            if(seq.at((it->first)+j)==true)
            {
                length++;
                s=it->first;
                seq.at((it->first)+j)=false;
            }   
        }
        
        for(int j=1;seq.count((it->first)-j)>0;j++)
        {
            if(seq.at((it->first)-j)==true)
            {
                length++;
                s=(it->first)-j;
                seq.at((it->first)-j)=false;
            }
        }
        if(length>maxlength)
        {
            maxlength=length;
            start=s;
        }
        else if(length==maxlength)
        {
            for(int k=0;k<n;k++)
            {
                if(arr[k]==s)
                {
                    position_s=k;
                    break;
                }
            }
            for(int k=0;k<n;k++)
            {
                if(arr[k]==start)
                {
                    position_start=k;
                    break;
                }
            }
            if(position_s<position_start)
            {
                start=s;
            }
        }
        it++;
        length=0;
    }
    
    
    vector<int>output;
    
    for(int i=0;i<maxlength;i++)
    {
        output.push_back(start+i);
    }
    return output;
*/




