#include <bits/stdc++.h>
using namespace std;
int main()
{
	map <char , int> k;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		k.insert(pair<char,int>(s[i],i));
	}
	if(k.size()==s.length())
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}