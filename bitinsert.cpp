#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m=1024,n=19;
	int i=2,j=6;
	/*cin>>m>>n>>i>>j;*/
	for(int k=i;k<=j;k++)
	{
		int value = (n&(1<<(k-i)))!=0;
		cout<<value<<endl;
		int mask = ~(1<<k);
		m = (m&mask)|(value<<k);
	}
	cout<<"M = "<<m;
}