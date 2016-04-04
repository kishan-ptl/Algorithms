//partner: Wonjae Yang

#include <string>
#include <fstream>
#include <iostream>
#include <ctype.h>

using namespace std;

void fourA()
{
	char c;
	int i = 0;
	int digitsTotal = 0;
	int BUIDcount = 0;
	bool done = false;
	ifstream inFile;
	inFile.open("BigData.txt");
	
	while (!inFile.eof())
	{
		inFile.get(c); //gets each character
		if (c == 'U') 
		{
			while (i < 8 && !done) //are next 8 chars an int?
			{
				inFile.get(c);
				if(isdigit(c)) //check if char is digit
				{
					digitsTotal += c - '0';
					i++;
				}
				else if (c == 'U') //if char is U -> looptop
				{
					i = 0;
					digitsTotal = 0;
				}
				else done = true; //time to move on
			}
			if (i == 8 && digitsTotal > 28) //8 digits, >28
			{
				inFile.get(c); //is next char a non-digit?
				{
					if (!isdigit(c))
					{
						BUIDcount++; //meets all criteria. +1 BUID's
					}
				}
			}
			digitsTotal = 0; //reset sum of 8 digits
			i = 0; 
			done = false;
		}
	}
	cout << BUIDcount << endl;
}
//int main() {fourA();}