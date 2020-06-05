// HACKERRANK
// Ques: Lily likes to play games with integers. She has created a new game where she determines the difference 
// between a number and its reverse. 
// She decides to apply her game to decision making. She will look at a numbered range of days and will only go to a movie on a beautiful day.
// Given a range of numbered days,  and a number , determine the number of days in the range that are beautiful.
// Beautiful numbers are defined as numbers where  is evenly divisible by . If a day's value is a beautiful number, it is a beautiful day.
// Print the number of beautiful days in the range.


#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the beautifulDays function below.

int reverse(int num)
{
    int rev=0;

    while(num>0)
    {
        rev=rev*10+num%10;
        num=num/10;
    }

    return rev;

}

int beautifulDays(int i, int j, int k) {

    int count=0;
    int rev;

    for(int d=i;d<=j;d++)
    {
        rev=reverse(d);
        int diff=abs(d-rev);

        if(diff%k==0)
        {
            count++;
        }
    }

    return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string ijk_temp;
    getline(cin, ijk_temp);

    vector<string> ijk = split_string(ijk_temp);

    int i = stoi(ijk[0]);

    int j = stoi(ijk[1]);

    int k = stoi(ijk[2]);

    int result = beautifulDays(i, j, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

