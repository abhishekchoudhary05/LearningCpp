#include<iostream>
using namespace std;

void GenerateStrings(string str, int n, int k) {
	if (n == 0) {
		cout<<str<<endl;
	}
	else {
		for (int i = 0; i < k; i++)
		{
			str[n - 1] = '0' + i;
			GenerateStrings(str, n - 1, k);
		}
	}
}

//int main(void) {
//	string str = "000";
//	GenerateStrings(str, 3, 3);
// 	return 0;
//}