// Ques: Given two strings, S and T, check if they are
// permutations of each other. Return true or false.

// input1 - first input string
// input2 - second input string
#include<string.h>
bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    
    int arr[26]={0};
    
    for(int i=0;i<strlen(input1);i++)
    {
        arr[input1[i]-97]++;
    }
    
    for(int i=0;i<strlen(input2);i++)
    {
        arr[input2[i]-97]--;
    }
    
    for(int i=0;i<26;i++)
    {
        if(arr[i]!=0)
        {
            return false;
        }
    }
    return true;

}

