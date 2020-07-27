

int staircase(int n){
    /* Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Return output and don't print it.
     *  Taking input and printing output is handled automatically.
     */
    if(n<=0)
    {
        return 1;
    }
    
    int x=staircase(n-1);
    
    int y=0,z=0;
    
    if(n>=2)
    {
       y=staircase(n-2);  
    }
    if(n>=3)
    {
       z=staircase(n-3);
    }
    
    int count=x+y+z;
    
    return count;
}
