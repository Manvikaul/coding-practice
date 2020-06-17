//hackerrank
//In this challenge, you will determine whether a string is funny or not. To determine whether a string is funny,
// create a copy of the string in reverse. Iterating through each string, compare the absolute difference in the 
//ascii values of the characters at positions 0 and 1, 1 and 2 and so on to the end. If the list of absolute differences
// is the same for both strings, they are funny.

#include <bits/stdc++.h>

using namespace std;

// Complete the funnyString function below.
string funnyString(string s) {

    string str=s;
    reverse(s.begin(),s.end());
    
    int a[s.size()-1];
    for(int i=0;i<s.size()-1;i++)
    {
        a[i]=abs(s[i]-s[i+1]);
    }
    for(int i=0;i<str.size()-1;i++)
    {
        if(abs(str[i]-str[i+1])!=a[i])
        {
            return "Not Funny";
        }
    }
    return "Funny";
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

        string result = funnyString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

