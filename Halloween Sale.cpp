//hackerrank
//You wish to buy video games from the famous online video game store Mist.
//Usually, all games are sold at the same price,p  dollars. However, 
//they are planning to have the seasonal Halloween Sale next month in which you can buy games at a cheaper price.
// Specifically, the first game you buy during the sale will be sold at p dollars, but every subsequent
// game you buy will be sold at exactly d dollars less than the cost of the previous one you bought.
//This will continue until the cost becomes less than or equal to m dollars, after which every game you buy will cost m dollars each.

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the howManyGames function below.
int howManyGames(int p, int d, int m, int s) {
    // Return the number of games you can buy

    int count=0;
    while(s>0)
    {
        if(s>=p)
        {
            s=s-p;
            count++;     
        }
        else
        {
            break;
        }
        
        if(p-d>m)
        {
            p=p-d;
        }
        else
        {
            p=m;
        }
    }

    return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string pdms_temp;
    getline(cin, pdms_temp);

    vector<string> pdms = split_string(pdms_temp);

    int p = stoi(pdms[0]);

    int d = stoi(pdms[1]);

    int m = stoi(pdms[2]);

    int s = stoi(pdms[3]);

    int answer = howManyGames(p, d, m, s);

    fout << answer << "\n";

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

