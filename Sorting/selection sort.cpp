#include <iostream>
#include<math.h>
using namespace std;

int main()
{
int ar[100];
int n;
cout<<"enter the number of elements"<<endl;
cin>>n;
for(int i = 0;i<n;i++)//input array
{
	cin>>ar[i];
}

//sorting of array
int temp;
for(int i = 0;i<n-1;i++)
{
	int min = i;
	for(int j = i+1;j<n;j++)
	{
		if(ar[j]<ar[min])
		min = j;
	}
	temp = ar[i];
	ar[i] = ar[min];
	ar[min] = temp;
	
}
//printing sorted array
for(int i = 0;i<n;i++)
{
	cout<<ar[i]<<" ";
}
return 0;
}
