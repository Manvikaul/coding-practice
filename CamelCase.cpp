//HACKERRANK
//Alice wrote a sequence of words in CamelCase as a string of letters, , having the following properties:
//It is a concatenation of one or more words consisting of English letters.
//All letters in the first word are lowercase.
//For each of the subsequent words, the first letter is uppercase and rest of the letters are lowercase.
//Given s, print the number of words in s on a new line.

#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
    int count=1;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            count++;
        }
    }

    return count;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

