#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node* next;
};

Node* start = NULL;

void InsertNode(int data) {
	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = NULL;

	if (start == NULL)
	{
		start = newNode;
		return;
	}

	Node* temp = start;
	while (temp->next!=NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
}

void PrintList() {
	Node* temp = start;
	while (temp)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

//int main(void) {
//	InsertNode(10);
//	InsertNode(20);
//	InsertNode(30);
//	InsertNode(40);
//	PrintList();
//	return 0;
//}