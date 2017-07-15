#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a = 0.72;
	string bin = "0.";
	double result = a;
	int count =0;
	while(result!=0 && count ++ < 32)
	{
		result*=2;
		if(result>=1)
		{
			bin.append("1");
			result-=1;
		}
		else
			bin.append("0");
	}
	cout<<bin;
}