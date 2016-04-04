
//Kishan Patel. Partner: Wonjae Yang

#ifndef numCELLLIST
#define numCELLLIST

#include "numCell.h"
#include <vector>
#include <string>
#include <ctype.h>

using namespace std;

template<typename T> class numCellList 
{
private:	
	vector<numCell<T> > myArray;
	int arraySize;
	T totalSum;
public:
	numCellList()
	{
		arraySize = 0;
	}

	void write(numCell<T> value)
	{
		myArray.push_back(value.read());
		arraySize++;
	}

	void print()
	{
		for (int i = 0; i < arraySize; i++)
		{
			cout << myArray[i].read() << ' ';
		}
		cout << endl;
	}

	T sum()
	{
		for (int i = 0; i < arraySize; i++)
		{
			if (i == 0) totalSum = myArray[i].read();
			else totalSum = totalSum + myArray[i].read();
		}
		return totalSum;
	}

	T product();
};

template<>
int numCellList<int>::product()
{
	int totalProduct;
	for (int i = 0; i < arraySize; i++)
	{
		if (i == 0)
		{
			totalProduct = myArray[0].read();			
		}
		else
		{
			totalProduct = totalProduct * myArray[i].read();
		}
	}
	return totalProduct;
}

template<>
string numCellList<string>::product()
{
	string output = "";
	bool notDone = true;
	int arrayIndex = 0;
	int stringIndex = 0;
	int counter = 0;
	while (notDone)
	{
		if (arrayIndex >= arraySize)
		{
			arrayIndex = 0;
			stringIndex++;
		}
		if (myArray[arrayIndex].read().size() > stringIndex)
		{
			string temp = myArray[arrayIndex].read();
			output += temp[stringIndex];
			counter = 0;
		}
		else
		{
			counter++;
			if (counter == arraySize)
			{
				notDone = false;
			}
		}
		arrayIndex++;
	}
	return output;
}

#endif

