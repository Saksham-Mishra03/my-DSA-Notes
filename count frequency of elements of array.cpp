#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
int ar[10];
	
	int freq[100]={0};
	
	for(int i = 1; i<=10;i++)
	{
		cin>>ar[i];
	}
	
	for(int i =  1;i<=10;i++)
	freq[ar[i]]++;
	
	for(int i =1;i<=100;i++)
	cout<<freq[i]<<" ";
}
