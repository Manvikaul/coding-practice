//HACKERRANK
//An English text needs to be encrypted using the following encryption scheme.
//First, the spaces are removed from the text. Let L be the length of this text.
//Then, characters are written into a grid, whose rows and columns have the following constraints

#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s) {

    int n=s.size();
    int row=floor(sqrt(n));
    int col=ceil(sqrt(n));
    int k=0;

    if(row*col<n)
    {
        row=col;
    }

    char a[row][col];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            a[i][j]=s[k];
            k++;
        }
    }

    string ans="";
    int j;

    for(int i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            if(a[j][i]!='\0')
            ans.push_back(a[j][i]);

        }

         ans.push_back(' ');
    }
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

