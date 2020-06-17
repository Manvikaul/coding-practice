//hackerrank
//Alice has a binary string. She thinks a binary string is beautiful if and only if it doesn't contain the substring '010'.
//In one step, Alice can change a 0 to a 1 or vice versa. Count and print the minimum number of steps needed to make Alice see the string as beautiful.

#include <bits/stdc++.h>

using namespace std;

// Complete the beautifulBinaryString function below.
int beautifulBinaryString(string b) {
    int j,k;
    int count=0;

    for(int i=0;i<b.size()-2;i++)
    {
        j=i+1;
        k=i+2;
        if(b[i]=='0' && b[j]=='1' && b[k]=='0')
        {
            count++;
            i=k;
        }
    }

    return count;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string b;
    getline(cin, b);

    int result = beautifulBinaryString(b);

    fout << result << "\n";

    fout.close();

    return 0;
}

