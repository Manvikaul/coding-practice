#include<unordered_map>
#include<cstring>
int makeAnagram(char str1[], char str2[]){
	/* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    
    int del=0;
    
    unordered_map<char,int>mymap1;
    unordered_map<char,int>mymap2;
    
    int m=strlen(str1);
    int n=strlen(str2);
    
    for(int i=0;i<m;i++)
    {
        mymap1[str1[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        mymap2[str2[i]]++;
    }
      unordered_map<char,int>::iterator it;
    it=mymap1.begin();
    
    while(it!=mymap1.end())
    {
        if(mymap2.count(it->first)>0)
        {
            if(it->second>mymap2.at(it->first))
            {
                del=del+it->second-mymap2.at(it->first);
            }
        }
        else
        {
            del=del+(it->second);
        }
        it++;
    }
    
     unordered_map<char,int>::iterator it1;
    it1=mymap2.begin();
    
    while(it1!=mymap2.end())
    {
        if(mymap1.count(it1->first)>0)
        {
            if(it1->second>mymap1.at(it1->first))
            {
                del=del+it1->second-mymap1.at(it1->first);
            }
        }
        else
        {
            del=del+(it1->second);
        }
        it1++;
    }
    return del;
}

