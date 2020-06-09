//HACKERRANK
//You are given a number of sticks of varying lengths. You will iteratively cut the sticks into smaller sticks, 
//discarding the shortest pieces until there are none left. At each iteration you will determine the length of the 
//shortest stick remaining, cut that length from each of the longer sticks and then discard all the pieces of that shortest length.
//When all the remaining sticks are the same length, they cannot be shortened so discard them.
//Given the lengths of n sticks, print the number of sticks that are left before each iteration until there are none left.

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the cutTheSticks function below.
vector<int> cutTheSticks(vector<int> arr) {

    vector<int> ans;

    sort(arr.begin(),arr.end(),greater<int>());

    while(!arr.empty())
    {

        ans.push_back(arr.size());

        for(int i = 0; i<arr.size();++i)
        arr[i]-=arr[arr.size()-1];

        while(arr.back() ==0 && !arr.empty())
        arr.pop_back();

    }   
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    vector<int> result = cutTheSticks(arr);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

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

