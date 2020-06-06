//HACKERRANKS
//Ques: You have been asked to help study the population of birds migrating across the continent.
// Each type of bird you are interested in will be identified by an integer value. 
// Each time a particular kind of bird is spotted, its id number will be added to your array of sightings. 
// You would like to be able to find out which type of bird is most common given a list of sightings. 
// Your task is to print the type number of that bird and if two or more types of birds are equally common, 
// choose the type with the smallest ID number.

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the migratoryBirds function below.
int migratoryBirds(vector<int> arr) {

    int sol[5]={0};
    int maxvalue=0;
    int maxindex=0;

    for(int i=0;i<arr.size();i++)
    {
        sol[arr[i]-1]++;
    }

    for(int i=0;i<5;i++)
    {
        if(sol[i]>maxvalue)
        {
            maxindex=i+1;
            maxvalue=sol[i];
        }
    }

    return maxindex;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = migratoryBirds(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

