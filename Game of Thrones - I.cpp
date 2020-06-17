//hackerrank
//Complete the gameOfThrones function below to determine whether a given string can be rearranged into a palindrome. 
//If it is possible, return YES, otherwise return NO.

#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfThrones function below.
string gameOfThrones(string s) {

    int n=s.size();
    unordered_map<int,int>mymap;

    for(int i=0;i<n;i++)
    {
        mymap[s[i]]++;
    }

    if(n%2==0)
    {
        for(int i=97;i<123;i++)
        {
            if(mymap[i]%2!=0)
            {
                return "NO";
            }
        }
    }
    else
    {
        int flag=0;
        for(int i=97;i<123;i++)
        {
            if(mymap[i]%2!=0 && flag==0)
            {
                flag=1;
            }

            else if(mymap[i]%2!=0 && flag==1)
            {
                return "NO";
            }

        }
    }

    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

