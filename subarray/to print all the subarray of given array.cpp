#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i = 0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(int sp = 0;sp<n;sp++)
	{
		for(int ep = sp;ep<n;ep++)
		{
			for(int i  = sp;i<=ep;i++)
			{
				cout<<ar[i]<<"\n";
			}
			cout<<endl;
		}
	}
}
