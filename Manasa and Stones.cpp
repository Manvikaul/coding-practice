//HACKERRANK
//Manasa is out on a hike with friends. She finds a trail of stones with numbers on them. 
//She starts following the trail and notices that any two consecutive stones' 
//numbers differ by one of two values. Legend has it that there is a treasure trove at the end of the trail.
// If Manasa can guess the value of the last stone, the treasure will be hers.

#include <bits/stdc++.h>

using namespace std;

// Complete the stones function below.
vector<int> stones(int n, int a, int b) {

    vector<int>ans;
    int temp;

    if(a==b)
    {
        temp=a*(n-1);
        ans.push_back(temp);
        return ans;
    }

    for(int i=0;i<n;i++)
    {
        temp=a*((n-1)-i)+b*i;
        ans.push_back(temp);
    }

    sort(ans.begin(),ans.end());
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int T_itr = 0; T_itr < T; T_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int a;
        cin >> a;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int b;
        cin >> b;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<int> result = stones(n, a, b);

        for (int i = 0; i < result.size(); i++) {
            fout << result[i];

            if (i != result.size() - 1) {
                fout << " ";
            }
        }

        fout << "\n";
    }

    fout.close();

    return 0;
}

