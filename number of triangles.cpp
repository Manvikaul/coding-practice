#include <iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;

	for(int i=0;i<T;i++)
	{
		int n,b1,b2;
		cin>>n>>b1>>b2;
		int count=0;

		for(int i=1;i<n;i++)
		{
			if(i!=b1 && i!=b2 && (i+1)!=b1 && (i+1)!=b2)
			{
				count=count+n-4;
				cout<<"one"<<i<<count<<" ";
				if((i+2)!=b1 && (i+2)!=b2 && i!=n-1)
				{
					count--;
					cout<<"two"<<count<<" ";
				}
			}
		}

		if(b1!=1 && b2!=1 && b1!=n && b2!=n)
		{
			count=count+n-4;
			if(b1!=2 && b2!=2)
			{
				count--;
			}
		}

		cout<<count<<endl;

	}

	return 0;
}
