// Ques: Given a two dimensional N*M array, print the array 
// in a sine wave order. i.e. print the first column top to 
// bottom, next column bottom to top and so on.
// Note : Print the elements separated by space.


#include <iostream>
using namespace std;

void wavePrint(int **input, int row, int col)
{
    //Write your code here
    
    int flag=0;
    
    for (int j=0;j<col;j++)
    {
        if(flag==0)
        {
            for (int i=0;i<row;i++)
            {
                cout<<input[i][j]<<" ";
            }
            flag=1;
        }
        else if(flag==1)
        {
            for(int i=row-1;i>=0;i--)
            {
                cout<<input[i][j]<<" ";
            }
            flag=0;
        }
    }
}
