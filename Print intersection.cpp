// input1 - first array
// input2 - second array
// size1 - size of first array
// size2 - size of second array
#include<unordered_map>

void intersection(int input1[], int input2[], int size1, int size2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print the output and don't return it.
     * Taking input is handled automatically.
     */
    
     unordered_map<int,int>counter; 
     unordered_map<int,int>counter1; 
    
    for(int i=0;i<size1;i++)
    {
        counter[input1[i]]++;
      //  cout<<"one"<<counter[input1[i]]<<endl;
    }
    for(int j=0;j<size2;j++)
    {
            counter1[input2[j]]++;
        //   cout<<"two"<<counter1[input2[j]]<<endl;          
    }
    for(int i=0;i<size1;i++)
    {
        if(counter.count(input1[i])>0 && counter1.count(input1[i])>0)
        {
            if(counter.at(input1[i])>0 && counter1.at(input1[i])>0)
            {
                cout<<input1[i]<<endl;
            counter[input1[i]]--;
            counter1[input1[i]]--;
            }
        } 
           /* if(counter.at(input1[i])>counter1.at(input1[i]))
            {
                for(int j=0;j<counter1.at(input1[i]);j++)
                {
                    cout<<"if"<<input1[i]<<endl;
                }
            }
            else
            {
                for(int j=0;j<counter.at(input1[i]);j++)
                {
                    cout<<"else"<<input1[i]<<endl;
                }
            }
            */
        
    }
    
 /*  
    
    for
 
  unordered_map<int,int> :: iterator it;
    it=counter.begin();
    
    while(it!=counter.end())
    {
        if(it->second==0)
        {
            cout<<it->first<<endl;
        }
        it++;
    }*/
}

