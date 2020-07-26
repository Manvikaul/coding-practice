#include <string>
using namespace std;

int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    
    if(num==0 || num==1)
    {
        output[0]="";
        return 1;
    }
    
    int smallnum=num/10;
    int current=num%10;
    int smalloutput=keypad(smallnum,output);
    if(current!=7 && current!=8 && current!=9)
    {
        smalloutput=3*smalloutput;
        for(int i=0;i<smalloutput/3;i++)
        {
            string t=output[i];
            output[i]=t+(char)((current-2)*3+97);
               
            output[i+(smalloutput/3)]=t+(char)((current-2)*3+98);
           
            output[i+(2*smalloutput/3)]=t+(char)((current-2)*3+99);
            
        }
          
      return (smalloutput);  
       
    }
    
    else if(current==7)
    {
        smalloutput=4*smalloutput;
        for(int i=0;i<smalloutput/4;i++)
        {
            string t=output[i];
            output[i]=t+(char)((current-2)*3+97);
               
            output[i+(smalloutput/4)]=t+(char)((current-2)*3+98);
           
            output[i+(smalloutput/2)]=t+(char)((current-2)*3+99);
            
            output[i+(3*smalloutput/4)]=t+(char)((current-2)*3+100);
            
        }
          
      return (smalloutput);  
    }
    else if(current==8)
    {
        smalloutput=3*smalloutput;
        for(int i=0;i<smalloutput/3;i++)
        {
            string t=output[i];
            output[i]=t+(char)((current-2)*3+98);
               
            output[i+(smalloutput/3)]=t+(char)((current-2)*3+99);
           
            output[i+(2*smalloutput/3)]=t+(char)((current-2)*3+100);
        }
          
      return (smalloutput); 
    }
    else if(current==9)
    {
        smalloutput=4*smalloutput;
        for(int i=0;i<smalloutput/4;i++)
        {
            string t=output[i];
            output[i]=t+(char)((current-2)*3+98);
               
            output[i+(smalloutput/4)]=t+(char)((current-2)*3+99);
           
            output[i+(smalloutput/2)]=t+(char)((current-2)*3+100);
            
            output[i+(3*smalloutput/4)]=t+(char)((current-2)*3+101);
            
        }
          
      return (smalloutput);  
    }
    
    
}

