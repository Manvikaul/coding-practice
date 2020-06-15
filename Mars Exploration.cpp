//hackerrank
//Sami's spaceship crashed on Mars! She sends a series of SOS messages to Earth for help.
//Letters in some of the SOS messages are altered by cosmic radiation during transmission. 
//Given the signal received by Earth as a string,s, determine how many letters of Sami's SOS have been changed by radiation.
//For example, Earth receives SOSTOT. Sami's original message was SOSSOS. Two of the message characters were changed in transit.

#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {

    int count=0;
    int flag=0;

    for(int i=0;i<s.size();i++)
    {
        if(flag==0 && s[i]!='S')
        {
            count++;
            cout<<s[i]<<" ";
        }

        if(flag==1 && s[i]!='O')
        {
            count++;
            cout<<s[i]<<" ";
        }

        if(flag==2 && s[i]!='S')
        {
            count++;
            cout<<s[i]<<" ";
        }

        flag=(flag+1)%3;
    }

    return count;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

