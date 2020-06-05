// HACKERRANK
// Ques: Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.
// Note: Midnight is 12:00:00AM on a 12-hour clock, and 00:00:00 on a 24-hour clock. Noon is 12:00:00PM on a 12-hour clock, and 12:00:00 on a 24-hour clock.

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
     
     if(s[8]=='P' && (s[0]!='1' || s[1]!='2' ))
     {
         s[0]=s[0]+1;
         s[1]=s[1]+2;
     }
     else if(s[0]=='1' && s[1]=='2' && s[8]=='A')
     {
         s[0]='0';
         s[1]='0';
     }
     s.resize(8);
     return s;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

