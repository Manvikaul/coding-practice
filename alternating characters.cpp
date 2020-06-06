//HACKERRANK
// Ques: You are given a string containing characters A and B only. Your task is to change it into a string 
// such that there are no matching adjacent characters. To do this, you are allowed to delete zero or more characters in the string.

#include <bits/stdc++.h>

using namespace std;

// Complete the alternatingCharacters function below.
int alternatingCharacters(string s) {

    int i=0;
    int j=1;
    int deletions=0;

    while(j<s.size())
    {
        if(s[i]==s[j])
        {
            deletions++;
            j++;
        }
        else
        {
            i=j;
            j++;
        }
    }

    return deletions;


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

        int result = alternatingCharacters(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

