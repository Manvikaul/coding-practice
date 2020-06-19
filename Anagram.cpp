//hackerrank
//In this challenge, you will be given a string. You must split it into two contiguous substrings, 
//then determine the minimum number of characters to change to make the two substrings into anagrams of one another.

#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

// Complete the anagram function below.
int anagram(string s) {

    int n=s.size();

    if(n%2!=0)
    {
        return -1;
    }

    string str1=s.substr(0,n/2);
    string str2=s.substr(n/2,n);

    unordered_map<int,int>map1;
    unordered_map<int,int>map2;
    int count=0;

    for(int i=0;i<str1.size();i++)
    {
        map1[str1[i]]++;
    }
    for(int i=0;i<str2.size();i++)
    {
        map2[str2[i]]++;
    }

    for(int i=97;i<123;i++)
    {
        if(map1[i]!=map2[i])
        {
            count=count+abs(map1[i]-map2[i]);
        }
    }

    return count/2;

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

        int result = anagram(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

