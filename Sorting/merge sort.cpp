#include <iostream>
#include<math.h>
using namespace std;
int ar[100];
//sorting of array
void merge(int ar[], int l, int mid,int r)
{
	int n1 = mid-l+1;
	int n2 = r-mid;
	int a[n1];
	int b[n2];
	for(int i=0;i<n1;i++)
	{
		a[i]=ar[l+i];
	}
	for(int j=0;j<n2;j++)
	{
		b[j]=ar[mid+1+j];
	}
	int i =0;
	int j=0;
	int k = l;
	while(i<n1&&j<n2){
		if(a[i]<b[j])
		{
			ar[k]=a[i];
			k++;
			i++;
		}
		else
		{
			ar[k]=b[j];
			k++;
			j++;
		}
	}
	while(i<n1)
	{
		ar[k]=a[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		ar[k]=b[j];
			k++;
			j++;
	}
}

void mergesort(int ar[], int l,int r)
{
	if(l<r){
		int mid = (l+r)/2;
		mergesort(ar,l,mid);
		mergesort(ar,mid+1,r);
		
		merge(ar,l,mid,r);
	}
}
int main()
{
	
int n;
cout<<"enter the number of elements"<<endl;
cin>>n;
for(int i = 0;i<n;i++)//input array
{
	cin>>ar[i];
}

//driver code
mergesort(ar,0,n-1);


//printing sorted array
for(int i = 0;i<n;i++)
{
	cout<<ar[i]<<" ";
}
return 0;
}
