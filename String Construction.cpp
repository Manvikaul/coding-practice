//hackerrank
//Amanda has a string of lowercase letters that she wants to copy to a new string. 
//She can perform the following operations with the given costs. She can perform them any number of times to construct a new string p:
//Append a character to the end of string p at a cost of 1 dollar.
//Choose any substring of p and append it to the end of p at no charge.

#include <bits/stdc++.h>

using namespace std;

// Complete the stringConstruction function below.
int stringConstruction(string s) {

    unordered_map<int,int>mymap;
    int count=0;

    for(int i=0;i<s.size();i++)
    {
        mymap[s[i]]++;
    }

    for(int i=97;i<123;i++)
    {
        if(mymap[i]>0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = stringConstruction(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

