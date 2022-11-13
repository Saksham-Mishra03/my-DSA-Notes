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
int flag = 0,temp;
for(int i  =0; i<n-1;i++)
{
	flag=0;
	for(int j=0;j<n-i-1;j++)
	{
		if(ar[j]>ar[j+1])
		{
		flag = 1;
		temp = ar[j];
		ar[j] = ar[j+1];
		ar[j+1] = temp;
		}
	}
	if(flag==0)
	break;
}

//printing sorted array
for(int i = 0;i<n;i++)
{
	cout<<ar[i]<<" ";
}
return 0;
}
