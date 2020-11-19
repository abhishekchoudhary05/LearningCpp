#include <iostream>
using namespace std;

int Encryption() {
	string str = "aaaabbbccdd";
	
	string st = "";
	int i, count = 1;
	for (i = 0; i < str.length()-1; i++) {
		if (str[i] == str[i+1]) {
			count++;
			continue;
		}
		st = st + str[i];
		st = st + (char)('0' + count);
		count = 1;
	}
	st = st + str[i];
	st = st + (char)('0' + count);

	cout << st << endl;
	return 0;
}