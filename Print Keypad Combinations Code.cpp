#include <iostream>
#include <string>
using namespace std;

void printKey(int num,string output)
{
    if(num==0||num==1)
    {
        cout<<output<<endl;
        return;
    }
    
    if(num%10!=7 && num%10!=8 && num%10!=9 && num%10!=1)
    {
        printKey(num/10,char(((num%10)-2)*3+97)+output);
        printKey(num/10,char(((num%10)-2)*3+98)+output);
        printKey(num/10,char(((num%10)-2)*3+99)+output);
    }
    
    else if(num%10==7)
    {
        printKey(num/10,char(((num%10)-2)*3+97)+output);
        printKey(num/10,char(((num%10)-2)*3+98)+output);
        printKey(num/10,char(((num%10)-2)*3+99)+output);
        printKey(num/10,char(((num%10)-2)*3+100)+output);
        
    }
    
    else if(num%10==8)
    {
        printKey(num/10,char(((num%10)-2)*3+98)+output);
        printKey(num/10,char(((num%10)-2)*3+99)+output);
        printKey(num/10,char(((num%10)-2)*3+100)+output);
    }
    
    else if(num%10==9)
    {
        printKey(num/10,char(((num%10)-2)*3+98)+output);
        printKey(num/10,char(((num%10)-2)*3+99)+output);
        printKey(num/10,char(((num%10)-2)*3+100)+output);
        printKey(num/10,char(((num%10)-2)*3+101)+output);
    }
    
}

void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    
    string output="";
    
     printKey(num,output);
}

