#include<iostream>
#include<stack>
using namespace std;

class Node
{
public:
	int data;
	Node* left=NULL;
	Node* right = NULL;
};

Node* head = NULL;

void InsertNode(int data) {
	Node* node = new Node();
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	if (head == NULL)
	{
		head = node;
		return;
	}

	Node* t = head;
	stack<Node*> st;
	st.push(t);
	Node* temp = NULL;
	while (!st.empty())
	{
		temp = st.top();
		st.pop();
		if (temp->left != NULL)
		{
			st.push(temp->left);
		}
		else
		{
			break;
		}
		if (temp->right != NULL)
		{
			st.push(temp->right);
		}
		else
		{
			break;
		}
	}

	if (temp->left == NULL)
	{
		temp->left = node;
		return;
	}
	if (temp->right == NULL)
	{
		temp->right = node;
		return;
	}
}

void PrintTree(Node* start) {
	if (start == NULL)
	{
		return;
	}
	cout << start->data << " ";
	PrintTree(start->left);
	PrintTree(start->right);
}

int main(void) {
	InsertNode(10);
	InsertNode(20);
	InsertNode(30);
	InsertNode(40);
	InsertNode(50);

	PrintTree(head);
	return 0;
}