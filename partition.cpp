#include <bits/stdc++.h>
using namespace std;
int main()
{
	list<int> a;
	int i = -111;
	while(1)
	{
		
		cout<<"Enter 1000 to stop entering";
		cin>>i;
		if(i==1000)
			break;
		a.push_back(i);
	}
	int part = 0;
	cin>>part;
	list<int>b;
	b.push_back(part);
	int count = 1; 
	while(!a.empty())
	{
		int pop = a.front();
		a.pop_front();
		if(pop<part)
		{
			b.push_front(pop);
		}
		else if(pop>part)
		{
			b.push_back(pop);
		}
		else
		{
			if(count==1)
			{
				count = 0; 
				continue;
			}
			else
			{
				b.push_front(pop);
			}
		}
	}
	for (std::list<int>::iterator i = b.begin(); i != b.end(); ++i)
	{
		cout<<*i<<" -> ";
	}

}