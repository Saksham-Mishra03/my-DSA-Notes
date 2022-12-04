#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
	string s;
	getline(cin,s);
	cout<<s;
	
	int freq[26]={0};
	
	for(int i =  0;i<s.size();i++)
	freq[s[i]-'a']++;
	
	for(int i =0;i<26;i++)
	cout<<freq[i]<<" ";
}
