#include<iostream>
using namespace std;

void Heapify(int arr[], int parent, int length) {
	int leftC = 2 * parent + 1;
	int rightC = 2 * parent + 2;
	int largest = parent;
	if ((leftC < length) && (arr[leftC] > arr[largest]))
	{
		largest = leftC;
	}
	if (rightC < length && arr[rightC] > arr[largest])
	{
		largest = rightC;
	}
	if (largest != parent) {
		swap(arr[largest], arr[parent]);
		Heapify(arr, largest, length);
	}
}

void HeapSort(int arr[], int length) {
	for (int i = (length/2)-1; i >= 0; i--)
	{
		Heapify(arr, i, length);
	}

	for (int i = length-1; i > 0; i--)
	{
		swap(arr[0], arr[i]);
		Heapify(arr, 0, i);
	}
}

//int main(void) {
//	int arr[] = { 4,1,3,9,7 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	HeapSort(arr, length);
//
//	for (int i = 0; i < length; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}