
bool FindUnassignedLocation(int board[][9],int &r,int & c)
{
    for(r=0;r<9;r++)
    {
        for(c=0;c<9;c++)
        {
            if(board[r][c]==0)
            {
                return true;
            }
        }
    }
    return false;
}

bool funRow(int board[][9],int r,int n)
{
    for(int c=0;c<9;c++)
    {
        if(board[r][c]==n)
        {
            return false;
        }
    }
    return true;
}

bool funCol(int board[][9],int c,int n)
{
    for(int r=0;r<9;r++)
    {
        if(board[r][c]==n)
        {
            return false;
        }
    }
    return true;
}

bool funBox(int board[][9],int r,int c,int n)
{
   
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(board[r+i][c+j]==n)
            {
                return false;
            }
        }
    }
    return true;
}

bool isSafe(int board[][9],int n,int r, int c)
{
    return funRow(board,r,n) && funCol(board,c,n) && funBox(board,r-r%3,c-c%3,n) ;
}

/*
  void printGrid(int board[][9])  
{  
    for (int row = 0; row < 9; row++)  
    {  
    for (int col = 0; col < 9; col++)  
            cout << board[row][col] << " ";  
        cout << endl;
    }  
}  

*/

bool sudokuSolver(int board[][9]){

  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Don't print output and return output as specified in the question
  */
   
 

    int r,c;
    if(!FindUnassignedLocation(board,r,c))
    {
        //printGrid(board);
        return true;
    }
   
    for(int n=1;n<=9;n++)
    {
        if(isSafe(board,n,r,c))
        {
            board[r][c]=n;
           
            if(sudokuSolver(board))
            {
                return true;
            }
           
            board[r][c]=0;
           
        }
    }
   
   
return false;
   
}





// bool sudokuHelper(int board[][9],int x,int y)
// {
//     if(x>=8 && y>=8)
//     {
//         return true;
//     }
    
//     if(board[x][y]!=0)
//     {
//         if(y!=8)
//         {
//             y++;
//         }
//         else
//         {
//             y=0;
//             x++;
            
//         }
//     }
    
    
//     else
//     {
//         //for each row
//         int markedrow[9];
//         int k=0;
        
//         for(int i=0;i<9;i++)
//         {
//             if(board[i][y]!=0)
//             {
//                 markedrow[k]=board[i][y];
//                 k++;
//             }
//         }
        
//         //for each column
//         int markedcol[9];
//         k=0;
        
//         for(int i=0;i<9;i++)
//         {
//             if(board[x][i]!=0)
//             {
//                 markedcol[k]=board[x][i];
//                 k++;
//             }
//         }
        
//         //for each box
//         int markedbox[9];
//         k=0;
        
//         if(x<=2 && y<=2)
//         {
//             for(int i=0;i<3;i++)
//             {
//                 for(int j=0;j<3;j++)
//                 {
//                     if(board[i][j]!=0)
//                     {
//                         markedbox[k]=board[i][j];
//                         k++;
//                     }
//                 }
//             }
//         }
        
//         else if(x<=2 && y>2 && y<6)
//         {
//             for(int i=0;i<3;i++)
//             {
//                 for(int j=3;j<6;j++)
//                 {
//                     if(board[i][j]!=0)
//                     {
//                         markedbox[k]=board[i][j];
//                         k++;
//                     }
//                 }
//             }
//         }
//         else if(x<=2 && y>=6)
//         {
//             for(int i=0;i<3;i++)
//             {
//                 for(int j=6;j<9;j++)
//                 {
//                     if(board[i][j]!=0)
//                     {
//                         markedbox[k]=board[i][j];
//                         k++;
//                     }
//                 }
//             }
//         }
//         else if(x>2 && x<6 && y<=2)
//         {
//             for(int i=3;i<6;i++)
//             {
//                 for(int j=0;j<3;j++)
//                 {
//                     if(board[i][j]!=0)
//                     {
//                         markedbox[k]=board[i][j];
//                         k++;
//                     }
//                 }
//             }
//         }
//         else if(x>2 && x<6 && y>2 && y<6)
//         {
//             for(int i=3;i<6;i++)
//             {
//                 for(int j=3;j<6;j++)
//                 {
//                     if(board[i][j]!=0)
//                     {
//                         markedbox[k]=board[i][j];
//                         k++;
//                     }
//                 }
//             }
//         }
//         else if(x>2 && x<6 && y>=6)
//         {
//             for(int i=3;i<6;i++)
//             {
//                 for(int j=6;j<9;j++)
//                 {
//                     if(board[i][j]!=0)
//                     {
//                         markedbox[k]=board[i][j];
//                         k++;
//                     }
//                 }
//             }
//         }
//         else if(x>=6 && y<=2)
//         {
//             for(int i=6;i<9;i++)
//             {
//                 for(int j=0;j<3;j++)
//                 {
//                     if(board[i][j]!=0)
//                     {
//                         markedbox[k]=board[i][j];
//                         k++;
//                     }
//                 }
//             }
//         }
//         else if(x>=6 && y>2 && y<6)
//         {
//             for(int i=6;i<9;i++)
//             {
//                 for(int j=3;j<6;j++)
//                 {
//                     if(board[i][j]!=0)
//                     {
//                         markedbox[k]=board[i][j];
//                         k++;
//                     }
//                 }
//             }
//         }
//         else if(x>=6 && y>=6)
//         {
//             for(int i=6;i<9;i++)
//             {
//                 for(int j=6;j<9;j++)
//                 {
//                     if(board[i][j]!=0)
//                     {
//                         markedbox[k]=board[i][j];
//                         k++;
//                     }
//                 }
//             }
//         }
        
//         int options[9];
//         k=0;
        
//         int flag1=0;
//         int flag2=0;
//         int flag3=0;
        
//         for(int p=1;p<=9;p++)
//         {
//             for(int i=0;i<9;i++)
//             {
//                 if(markedcol[i]==p)
//                 {
//                     flag1=1;
//                 }
//             }
//             for(int i=0;i<9;i++)
//             {
//                 if(markedrow[i]==p)
//                 {
//                     flag2=1;
//                 }
//             }
//             for(int i=0;i<9;i++)
//             {
//                 if(markedbox[i]==p)
//                 {
//                     flag3=1;
//                 }
//             }
            
//             if(flag1==0 && flag2==0 && flag3==0)
//             {
//                 options[k]=p;
//                 k++;
//             }
//         }
        
//         if(k==0)
//         {
//             return false;
//         }
        
//         else
//         {
//             for(int t=0;t<k;t++)
//             {
//                 board[x][y]=options[t];
                
//                 if(true)
//                 {
//                     if(y!=8)
//                     {
//                         return sudokuHelper(board,x,y+1);
//                     }
//                     else
//                     {
//                         return sudokuHelper(board,x+1,0);
//                     }
                    
//                 }
//                 else
//                 {
//                     break;
//                 }
//             }
            
//             board[x][y]=0;
//             return false;
//         }
         
//     }
// }

// bool sudokuSolver(int board[][9]){

//   /* Don't write main().
//    *  Don't read input, it is passed as function argument.
//    *  Don't print output and return output as specified in the question
//   */
    
//     int x=0;
//     int y=0;
//     return sudokuHelper(board,x,y);
// }









