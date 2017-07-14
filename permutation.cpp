#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,t;
	cin>>s>>t;
	int letters[26] ={0};
	for(int i=0;i<s.length();i++)
	{
		letters[s[i]-'a'] ++;
	}
	for (int i = 0; i < t.length(); ++i)
	{
		letters[t[i]-'a'] --;
	}
	int flag = 0;
	for (int i = 0; i < 26; ++i)
	{
		if(letters[i]!=0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<"TRUE";
	else
		cout<<"FALSE";
}