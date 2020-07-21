//hackerrank
//Complete the workbook function in the editor below. It should return an integer that represents the number of special problems in the workbook.

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the workbook function below.
int workbook(int n, int k, vector<int> arr) {

    int page=1;
    int spl=0;
    int j;
    int flag=1;

    for(int i=0;i<n;i++)
    {
        int probs=arr[i];
        //cout<<arr[i]<<" ";

        for(j=1;j<=probs;j++)
        {
            flag=1;
            cout<<j<<endl;
            if(page==j)
            {
                spl++;
                cout<<"p2"<<page<<"j"<<j<<endl;
            }
            if(j%k==0)
            {
                page++;
                cout<<"p1"<<page<<"j"<<j<<endl;
                flag=0;
            }

        }
        if(flag)
        page++;
        cout<<"p1"<<page<<endl;
    }

    return spl;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = workbook(n, k, arr);

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

