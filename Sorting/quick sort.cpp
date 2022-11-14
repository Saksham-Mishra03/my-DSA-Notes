#include <iostream>
#include<math.h>
using namespace std;
int ar[100];
//sorting of array
int partition(int ar[],int low,int high)
{
	int pivot = ar[high];
	int i = low-1;
	
	for(int j = low;j<high;j++){
		if(ar[j]<pivot){
			i++;
			
			
			int temp = ar[i];
			ar[i]=ar[j];
			ar[j]=temp;
		}
	}
	i++;
	int temp = ar[i];
	ar[i] = ar[high];
	ar[high]=temp;
	return i;
}
void sort(int ar[],int low, int high){
	if(low<high){
		int pindex = partition(ar,low,high);
		
		sort(ar,low,pindex-1);
		sort(ar,pindex+1,high);
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
sort(ar,0,n-1);


//printing sorted array
for(int i = 0;i<n;i++)
{
	cout<<ar[i]<<" ";
}
return 0;
}
