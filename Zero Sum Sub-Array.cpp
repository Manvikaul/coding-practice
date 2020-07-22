#include<iostream>
using namespace std;
bool subArrayZeroSum(int input[], int n) {
		
	/* Don't write main().
     	* the input array is already passed as function argument.
     	* Taking input and printing output is handled automatically. Return only true or false.
     	*/
    int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=input[i];
          //  cout<<"initial"<<sum<<endl;
            for(int j=i+1;j<n;j++)
            {
                sum=sum+input[j];
               // cout<<sum<<endl;
                if(sum==0)
                {
                    return true;
                   // break;
                }
            }
            sum=0;
        }
    return false;
 
}


/*
   unordered_map<int,int>mymap;
    for(int i=0;i<n;i++)
    {
        mymap[input[i]]++;
    }
    unordered_map<int,int>::iterator it;
    it=mymap.begin();
    while(it!=mymap.end())
    {
        if(it->first<0)
        {
            for(int i=mymap.at)
        }
        it++;
    }*/
