//hackerrank
//James found a love letter that his friend Harry has written to his girlfriend. 
//James is a prankster, so he decides to meddle with the letter. He changes all the words in the letter into palindromes.
//To do this, he follows two rules:
//He can only reduce the value of a letter by 1, i.e. he can change d to c, but he cannot change c to d or d to b.
//The letter a may not be reduced any further.

#include <bits/stdc++.h>

using namespace std;

// Complete the theLoveLetterMystery function below.
int theLoveLetterMystery(string s) {

    int mid=(s.size())/2;
    int i;
    int j;
    int count=0;

    if(s.size()%2==0)
    {
        i=mid-1;
        j=mid;
    }
    else
    {
        i=mid-1;
        j=mid+1;
    }

    while(i>=0)
    {
        if(s[i]!=s[j])
        {
            count=count+abs(s[i]-s[j]);
        }
        i--;
        j++;
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

        int result = theLoveLetterMystery(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

