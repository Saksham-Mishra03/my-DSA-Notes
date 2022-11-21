#include <iostream>
#include<math.h>
using namespace std;
int ar[100];
	int count[100]={0};
	int b[100];
int m;
//sorting of array
void countsort(int ar[],int n)
{ 
	m = ar[0];
	for(int i = 0;i<n;i++)//for finding the maximum element
	{
	if(m<ar[i])
	m = ar[i]; 
	}

	for(int i = 0;i<n;i++)//for counting the element and updating 1by1 in array
	{
		++count[ar[i]];
	}
	for(int i = 1; i<=m;i++)//rank wise element update in array
	{
		count[i] = count[i]+count[i-1];
	}
	for(int i=n-1; i>=0;i--)
	{
		b[--count[ar[i]]]=ar[i];
	}
	for(int i = 0;i<n;i++)
	{
		ar[i]=b[i];
	}

}
int main()
{
	
int n;
cout<<"enter the number of elements"<<endl;
cin>>n;
cout<<"enter the elements"<<endl;
for(int i = 0;i<n;i++)//input array
{
	cin>>ar[i];
}

//driver code
countsort(ar,n);


//printing sorted array
for(int i = 0;i<n;i++)
{
	cout<<ar[i]<<" ";
}
return 0;
}
