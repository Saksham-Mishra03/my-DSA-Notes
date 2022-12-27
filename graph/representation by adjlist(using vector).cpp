#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,e;
	cin>>n>>e;
	
	vector<int>adj[n];
	
	for(int i =0;i<e;i++)
	{
		int x,y;
		cin>>x>>y;
		
		adj[x].push_back(y);
	}
	
	//printing
	for(int i = 0; i<n;i++)
	{
		cout<<i<< "->";
		for(int j = 0; j<adj[i].size();j++)
		cout<<adj[i][j]<<" ";
	}
	cout << endl;
	return 0;
}
