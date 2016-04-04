//Kishan Patel
#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

long BinarySum(string fileName) {
	ifstream file;
	string line;
	string lineArray[20];
	long longArray[20];
	int counter = 0;
	long decimalNumber = 0;

	file.open(fileName.c_str());
	if (file.is_open()) {
		while (!file.eof()) {
			getline(file, line);
			lineArray[counter] = line;
			counter++;
		}
	}
	file.close();
	
	for (int i = 0; i < counter; i++) {
		longArray[i] = strtol(lineArray[i].c_str(), NULL, 2);
		decimalNumber += longArray[i];
	}

	return decimalNumber;
}

int main(int argc, char* argv[]) {
	cout << BinarySum(argv[1]) << endl;	
	return 0;
}