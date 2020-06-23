 	//You are given an array of integers that contain numbers in random order. 
	 //Write a program to find and return the number which occurs the maximum times in the given input.
	//If two or more elements contend for the maximum frequency, return the element which occurs in the array first.
	 
	 #include<unordered_map>
	int highestFrequency(int *input, int n){	 
		
	/* Don't write main().
     	* the input array is already passed as function argument.
     	* Taking input and printing output is handled automatically.
     	*/
        
        unordered_map<int,int> max;
        
        for(int i=0;i<n;i++)
        {
           max[input[i]]++;
         
        }
     	
     	int maxcount=0;
        int maxvalue;
        for(int i=0;i<n;i++)
        {
          if(max[input[i]]>maxcount)
          {
     
              maxvalue=input[i];
              maxcount=max[input[i]];
      
          }
            
        }        
     	
        return maxvalue;
 	}


