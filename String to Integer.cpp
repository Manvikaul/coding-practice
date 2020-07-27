#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int stringToNumber(char input[]) {
    // Write your code here
    
    if(strlen(input)==1)
    {
        return input[0]-48;
    }
    
    int a=stringToNumber(input+1);
    
    int b=input[0]-48;
    
    a=b*pow(10,strlen(input)-1)+a;
    
    return a;
  
}



