 	#include<unordered_map>
	void PairSum(int *input, int n) {	 
		
	/* Don't write main().
     	* the input array is already passed as function argument.
     	* Don't need to return anything. Print the desired pairs in the function itself.
     	*/
        unordered_map<int,int>pairs;
     	
     	for(int i=0;i<n;i++)
        {
            pairs[input[i]]++;
            if(pairs.count(-input[i])>0)
            {
                for(int j=0;j<pairs.at(-input[i]);j++)
                {
                    if(input[i]>(-input[i]))
                    {
                        cout<<-input[i]<<" "<<input[i]<<endl;
                    }
                    else
                    {
                        cout<<input[i]<<" "<<-input[i]<<endl;
                    }
                }
            }
        }
     	
 	}


