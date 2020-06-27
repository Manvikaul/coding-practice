//hackerrank
//Complete the maximizingXor function in the editor below. It must return an integer representing the maximum value calculated.

#include <bits/stdc++.h>

using namespace std;

// Complete the maximizingXor function below.
int maximizingXor(int l, int r) {

    int result;
    int ans=0;

    for(int i=l;i<=r;i++)
    {
        for(int j=i+1;j<=r;j++)
        {
            result=i^j;
            if(result>ans)
            {
                ans=result;
            }
        }
    }

    return ans;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int l;
    cin >> l;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int r;
    cin >> r;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = maximizingXor(l, r);

    fout << result << "\n";

    fout.close();

    return 0;
}

