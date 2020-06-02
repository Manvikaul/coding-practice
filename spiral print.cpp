#include <iostream>
// Ques: Given an N*M 2D array, print it in spiral form.
//     That is, first you need to print the 1st row, 
//     then last column, then last row and then first column and so on.
//     Print every element only once.

using namespace std;

void spiralPrint(int input[][1000], int row, int col){
	/* Don't write main().
	* Don't read input, it is passed as function argument.
	* Print output and don't return it.
	* Taking input is handled automatically.
	*/
    
    int num= row*col;
    int rs=0;
    int re=row-1;
    int cs=0;
    int ce=col-1;
    
    while(num>0)
    {
        for(int i=cs;i<=ce;i++)
        {
            cout<<input[rs][i]<<" ";
            num--;
        }
        rs++;
        
        for(int i=rs;i<=re;i++)
        {
            cout<<input[i][ce]<<" ";
            num--;
        }
        ce--;
        
        for(int i=ce;i>=cs;i--)
        {
            cout<<input[re][i]<<" ";
            num--;
        }
        re--;
        
        for(int i=re;i>=rs;i--)
        {
            cout<<input[i][cs]<<" ";
            num--;
        }
        cs++;
    }

}


