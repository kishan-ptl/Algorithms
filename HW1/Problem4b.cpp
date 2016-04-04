#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string Analyze(string str, int size) {
	if (size >= str.length()) {
		return str;
	}
	else {
		string substr[(str.length() + 1 - size)];
		int substrCount[(str.length() + 1 - size)];
		for (int i = 0; i < (str.length() + 1 - size); i++) {
			substr[i] = str.substr(i,size);
		}

		for (int i = 0; i < (str.length() + 1 - size); i++) {
			if (substr[i] == str.substr(i,size)) {
				substrCount[i] += 1;
			}
		}

		for (int i = 0; i < (str.length() + 1 - size); i++) {
			if (substrCount[0] < substrCount[i]) {
				substrCount[0] = substrCount[i];
				substr[0] = substr[i];
			}
			return substr[0];
		}

		return "nil";
	}	
}

int main(int argc, char* argv[]) {
	cout << Analyze(argv[1], atoi(argv[2])) << endl;
	return 0;
}