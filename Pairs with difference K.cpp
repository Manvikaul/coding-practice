#include<unordered_map>
void printPairs(int *input, int n, int k) {
	// Write your code here
    unordered_map<int,int> mymap;
    
    for(int i=0;i<n;i++)
    {
        mymap[input[i]]++;
    }
    
    unordered_map<int,int>::iterator it;
    it=mymap.begin();
    
    while(it!=mymap.end())
    {
        if(k==0)
        {
            for(int i=0;i<((it->second)*(it->second-1))/2;i++)
            {
                cout<<it->first<<" "<<it->first<<endl;
            }
        }
        else
        {
            if(mymap.count(it->first+k)>0)
        {
            for(int i=0;i<it->second*mymap.at(it->first+k);i++)
            {
                cout<<it->first<<" "<<it->first+k<<endl;
            }
        }
        
        if(mymap.count(it->first-k)>0)
        {
            for(int i=0;i<it->second*mymap.at(it->first-k);i++)
            {
                cout<<it->first-k<<" "<<it->first<<endl;
            }
        }
        }
        it->second=0;
        
        it++;
    }

}



