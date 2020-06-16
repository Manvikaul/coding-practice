//hackerrank
//Happy Ladybugs is a board game having the following properties:
//The board is represented by a string,b , of length n. The ith character of the string,b[i] , denotes the ith cell of the board.

#include <bits/stdc++.h>

using namespace std;

// Complete the happyLadybugs function below.
string happyLadybugs(string b) {

    unordered_map<int,int>mymap;

    for(int i=0;i<b.size();i++)
    {
        mymap[b[i]]++;
        cout<<b<<" "<<mymap[b[i]]<<" ";
        cout<<endl;
    }

    for(int i=0;i<b.size();i++)
    {
        if((mymap[b[i]])<=1 && b[i]!='_')
        {
            return "NO";
        }
    }

    if(mymap['_']<1)
    {
        for(int i=1;i<b.size()-1;i++)
        {
            if(b[i]!=b[i-1] && b[i]!=b[i+1])
            {
                return "NO";
            }
        }
        return "YES";
    }
    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int g;
    cin >> g;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int g_itr = 0; g_itr < g; g_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string b;
        getline(cin, b);

        string result = happyLadybugs(b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

