#include<cstring>
bool helper(char input[],int start,int end)
{
    int n=strlen(input);
    
    if(start==end||start==end+1)
    {
        return true;
    }
    
    if(input[start]!=input[end])
    {
        return false;
    }
    if(input[start]==input[end])
    {
        return helper(input,start+1,end-1);
    }
    
    
       
}

bool checkPalindrome(char input[]) {
    // Write your code here
    
    int n=strlen(input);
    int start=0;
    int end=n-1;
    return helper(input,start,end);
}




