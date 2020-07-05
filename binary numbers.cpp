//hackerrnank
//30 days of code

#include <bits/stdc++.h>

using namespace std;

vector<int> toBinary(int n)
{
    vector<int>ans;
    while(n!=0)
    {
        int d=n/2;
        ans.push_back(n%2);
        n=d;
    }

    reverse(ans.begin(),ans.end());

    // for(int i=0;i<ans.size();i++)
    // {
    //     cout<<ans[i];
    // }
    // cout<<endl;
   

    return ans;
}

int numberOfOnes(vector<int>a)
{
    int max=0;
    int count=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==1)
        {
            count++;
            int j=i+1;
            while(a[j]==1)
            {
                count++;
                //cout<<count<<" ";
                j++;
                i=j;
            }
            if(count>max)
            {
                max=count;
            }
            count=0;
        }
        else
        {
            if(count>max)
            {
                max=count;
            }
            count=0;
        }
    }
    if(count>max)
    {
        max=count;
    }
    //cout<<max;
    return max;
}



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> result=toBinary(n);
    cout<<numberOfOnes(result);

    return 0;
}

