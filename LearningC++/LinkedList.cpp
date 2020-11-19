#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node* next;
};

Node* head = NULL;

void Insert(int data) {
	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = NULL;

	if (head==NULL) {
		head = newNode;
		return;
	}

	Node* temp = head;
	while (temp->next!=NULL) {
		temp = temp->next;
	}
	temp->next = newNode;
}

void Print() {
	if (head == NULL) {
		return;
	}
	Node* temp = head;
	while (temp) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

//int main(void) {
//	Insert(10);
//	Insert(20);
//	Insert(30);
//	Insert(40);
//	Print();
//	return 0;
//}
