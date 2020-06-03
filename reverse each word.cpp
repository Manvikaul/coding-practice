// Ques: Given a string S, reverse each word of a string individually. 
//     For eg. if a string is "abc def", reversed string should be "cba fed".

// input - given string
// Update in the given input itself. No need to return or print anything

#include<string.h>

void reverse(char input[],int start,int end)
{  
    while(start<end)
    {
        char temp=input[start];
        input[start]=input[end];
        input[end]=temp;
        
        start++;
        end--;
    }
}


void reverseEachWord(char input[]) {
    // Write your code here
    
    int i=0;
    int start=-1;
    
    while(input[i]!='\0')
    {
        if(input[i]==' ')
        {
            reverse(input,start+1,i-1);
            start=i;    
        }
        i++;
    }
    
    reverse(input,start+1,i-1);

}

