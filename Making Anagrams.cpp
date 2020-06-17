//hackerrank
//We consider two strings to be anagrams of each other if the first string's letters can be rearranged to form the second string.
// In other words, both strings must contain the same exact letters in the same exact frequency.
// For example, bacdc and dcbac are anagrams, but bacdc and dcbad are not.
//Alice is taking a cryptography class and finding anagrams to be very useful. 
//She decides on an encryption scheme involving two large strings where encryption is dependent on the minimum number of 
//character deletions required to make the two strings anagrams. Can you help her find this number?

#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.
int makingAnagrams(string s1, string s2) {

    unordered_map<int,int>map1;
    unordered_map<int,int>map2;
    int deletions=0;

    for(int i=0;i<s1.size();i++)
    {
        map1[s1[i]]++;
        cout<<map1[s1[i]]<<" ";
    }
    for(int i=0;i<s2.size();i++)
    {
        map2[s2[i]]++;
        cout<<map2[s2[i]]<<" ";
    }

    for(int i=97;i<123;i++)
    {
        if(map1[i]!=map2[i])
        {
            deletions+=abs(map1[i]-map2[i]);
        }
    }

    return deletions;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}

