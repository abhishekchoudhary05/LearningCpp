#include <iostream>
using namespace std;

int RotateMatrix() {
	const int m = 3; 
	const int n = 4;
	int array[m][n];
	int dArray[n][m];

	for (int i = 0; i < m;i++) {
		for (int j = 0; j < n;j++) {
			array[i][j] = i + j;
			cout << array[i][j]<<" ";
		}
		cout << endl;
	}
	cout << "After Rotatation" << endl;

	for (int r = 0; r < m; r++) {
		for (int c = 0; c < n; c++) {
			dArray[c][m - r - 1] = array[r][c];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << dArray[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}


