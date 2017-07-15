#include <bits/stdc++.h>
using namespace std;
class node
{
public: 
	int value;
	node* next;

	node(int d)
	{
		value = d;
		next = NULL;
	}
};
int main()
{
	node* head =new node(3);
	node* fn = new node(5);
	head->next = fn;
	node* sn = new node(7);
	fn->next = sn;
	node* tn = new node(9);
	sn->next = tn;
	tn->next = sn; 
	node *ptr1 = head;
	node *ptr2 = head;
	while(ptr2 != NULL && ptr2->next!=NULL)
	{
		ptr1 = ptr1->next;
		ptr2 = ptr2->next->next;
		if(ptr1==ptr2)
		{
			break;
		}
	}
	ptr1 = head;
	while(ptr1!=ptr2)
	{
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}
	cout<<"Corrupted node is "<<ptr1->value<<endl;
	int count = 1;
	ptr1 = ptr1->next;
	while(ptr1!=ptr2)
	{
		ptr1 = ptr1->next;
		count++;
	}
	cout<<"Loop length is "<<count;

}