#include<iostream>
using namespace std;

class Node
{
	public:
		char data;
		Node* next;
		Node* pre;
	Node(int data)
	{
		this->data=data;
		pre=NULL;
		next=NULL;
	}
};

void insertAtHead(Node* &head, int data)
{
	Node* n = new Node(data);
	if(head==NULL)
	{
		head=n;
		return;
	}
	n->next=head;
	head->pre=n;
	head=n;
	return;
}
void insertAtTail(Node* &head, int data)
{
	if(head==NULL)
	{
		insertAtHead(head,data);
		return;
	}
	Node* temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	Node* n=new Node(data);
	temp->next=n;
	n->pre=temp;
	return;
}
void display(Node* head)
{
	while(head!=NULL)
	{
		cout << head->data << "-->";
		head=head->next;
	}
	cout << "NULL\n";
}

void rotateDatanum(Node *&head, int pos)
{
	if (pos == 0)
		return;

	Node *curr = head;

	while (pos)
	{
		curr = curr->next;
		pos--;
	}

	Node *tail = curr->pre;
	Node *NewHead = curr;
	tail->next = NULL;
	curr->pre = NULL;

	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	
	curr->next = head;
	head->pre = curr;
	head = NewHead;
}

int main()
{
	Node* head=NULL;
	insertAtTail(head,'5');
	insertAtTail(head,'6');
	insertAtTail(head,'7');
	insertAtTail(head,'7');
	insertAtTail(head,'0');

	int n=2;
	cout << "\nBefore Rotation : \n";
	display(head);
	rotateDatanum(head,n);
	cout << "\nAfter Rotation : \n";
	display(head);
	cout << "\n\n";

	return 0;
}
