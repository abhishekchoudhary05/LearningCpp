#include<iostream>
using namespace std;

int Partition(int arr[], int low, int high) {
	int left = low, right = high, pivot = arr[low];
	while (left<right) {
		while (arr[left] <= pivot) {
			left++;
		}
		while (arr[right] > pivot)
		{
			right--;
		}
		if (left<right) {
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}

	arr[low] = arr[right];
	arr[right] = pivot;

	return right;
}

void QuickSort(int arr[], int low, int high) {
	if (low < high) {
		int pivot = Partition(arr, low, high);
		QuickSort(arr, low, pivot-1);
		QuickSort(arr, pivot+1, high);
	}
}

//int main(void) {
//	int arr[] = {4, 6, 0, 1, 2, 5, 3, 9, 8, 7};
//	QuickSort(arr, 0, 9);
//
//	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << " ";
//	}
//	return 0;
//}
