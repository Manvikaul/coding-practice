//hackerrank-cpp
//Print the integers in the sorted order one by one in a single line followed by a space.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    vector<int>v;
    int n;
    cin>>n;
    int p;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        v.push_back(p);
    }  

    sort(v.begin(),v.end());

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}

