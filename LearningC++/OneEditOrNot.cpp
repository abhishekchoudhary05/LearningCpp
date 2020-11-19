#include <iostream>
#include <cmath>
using namespace std;

string CheckStrings(string str_1, string str_2) {
	int x = str_1.length() - str_2.length();
	if (abs(x) > 1) {
		return "false";
	}
	else {
		int array[26] = { 0 };
		for (int i = 0; i < str_1.length(); i++) {
			if (str_1[i] >= 'a' && str_1[i] <= 'z') {
				array[str_1[i] - 'a']++;
			}
			else if (str_1[i] >= 'A' && str_1[i] <= 'Z') {
				array[str_1[i] - 'A']++;
			}
		}
		for (int i = 0; i < str_2.length(); i++) {
			if (str_2[i] >= 'a' && str_2[i] <= 'z') {
				array[str_2[i] - 'a']--;
			}
			else if (str_2[i] >= 'A' && str_2[i] <= 'Z') {
				array[str_2[i] - 'A']--;
			}
		}
		int count = 0;
		for (int i = 0; i < 26; i++) {
			if (array[i] != 0) {
				count++;
			}
		}
		if (count > 2) {
			return "false";
		}
		else
			return "true";
	}
}

int OneEditOrNot() {
	string str_1 = "pale";
	string str_2 = "bake";
	cout << CheckStrings(str_1, str_2) << endl;
	return 0;
}