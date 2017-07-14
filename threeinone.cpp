#include <bits/stdc++.h>
using namespace std;
void push(int stack[] , int val , int &to)
{
	stack[to++] = val;
}
int pop(int stack[] , int &to)
{
	return stack[to--];
}
int main()
{
	int a[120] ={0};
	int top1 = 0;
	int top2 = 40;
	int top3 = 80;
	int ch = 0;
	while(ch!=4)
	{
		ch = 0;
		cout<<"\nMenu\n"
			<<"1.Push\n"
			<<"2.Pop\n"
			<<"3.Display\n"
			<<"4.Exit\n"
			<<"Enter your Choice (1-4)";
		cin>>ch;
		if(ch==1)
		{
			int sn = 0;
			cout<<"Enter the stack number\n";
			cin>>sn;
			int val;
			cout<<"Enter the value\n";
			cin>>val;
			if(sn==1)
			{
				if(top1==39)
					cout<<"Overflow";
				else
					push(a,val,top1);
			}
			else if(sn==2)
			{
				if(top2==79)
					cout<<"Overflow";
				else
					push(a,val,top2);
			}
			else if(sn==3)
			{
				if(top1==129)
					cout<<"Overflow";
				else
					push(a,val,top3);
			}
			else
				cout<<"Invalid Stack";
		}
	}
}