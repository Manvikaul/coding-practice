// Ques: Given an N*N integer square matrix, rotate it by 90 degrees in anti-clockwise direction.
// Try doing it without any extra space.

void rotate(int **input, int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Taking input and printing output is handled automatically.
     */
    int temp;
    
    //taking transpose
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            temp=input[i][j];
            input[i][j]=input[j][i];
            input[j][i]=temp;
        }
    }
    
    //taking mirror image along horizontal line
    for(int i=0;i<(n+1)/2;i++)
    {
        for (int j=0;j<n;j++)
        {
            temp=input[i][j];
            input[i][j]=input[n-i-1][j];
            input[n-1-i][j]=temp;
        }
    }
}

