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
for(int i=1;i<n;i++)
{
	temp=ar[i];
	int j =i-1;
	while(j>=0&& ar[j]>temp)
	{
		ar[j+1]=ar[j];
		j--;
	}
	ar[j+1]=temp;
}

//printing sorted array
for(int i = 0;i<n;i++)
{
	cout<<ar[i]<<" ";
}
return 0;
}
