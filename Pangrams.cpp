//hackerrank
//Output a line containing pangram if  is a pangram, otherwise output not pangram.

#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {

    unordered_map<int,int>mymap;
    int count=0;

    for(int i=0;i<s.size();i++)
    {
        s[i] = tolower(s[i]);
    }

    for(int i=0;i<s.size();i++)
    {
        mymap[s[i]]++;
    }

    for(int i=97;i<123;i++)
    {
        if(mymap[i]<1)
        {
            return "not pangram";
        }
    }

    return "pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

