#include<iostream>
#include<unistd.h>
#include<stdio.h>
#include <sys/types.h> 

using namespace std;

int main()
{
	if(fork() && fork())
	{
		fork();
	}
	
	cout<<"hello"<<endl;
	return 0;
}
