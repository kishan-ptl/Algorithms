//partner: Wonjae Yang

#include <iostream>
#include "HashTable.h"
#include <fstream>
#include <string>

using namespace std;

HashTable::HashTable(string fileName)
{
	string word;
	ifstream inFile;
	inFile.open(fileName.c_str());
	
	//hash the dictionary into an ordered map
	while(!inFile.eof())
	{
		getline(inFile,word);
		myMap[word] = true; //set all words in dict to true
	}
}

void HashTable::SpellCheck(string s)
{
	if (myMap[s]) //if string already exists in dictionary
	{
		cout << s << endl;
	}
	else
	{
		//functions for possible spelling errors
		swapLetter(s);
		insertLetter(s);
		deleteLetter(s);
		replaceLetter(s);
	}	
}


void HashTable::swapLetter(string s)
{
	for (int i = 0; i < s.size()-1; i++)
	{
		//swaps adjacent characters and checks if result is in dictionary
		string temp = s;
		char tempc = temp[i];
		temp[i] = temp[i+1];
		temp[i+1] = tempc;
		if (myMap[temp])
		{
			cout << temp << endl;
		}
	}
}

void HashTable::insertLetter(string s)
{
	for (int i = 0; i < s.size(); i++)
	{
		for (int j = 65; j < 90; j++) //uppercase A-Z
		{
			string temp = s;
			
			//insert each letter from A-Z and check if its in dictionary
			temp.insert(temp.begin() + i, char(j));
			if (myMap[temp])
			{
				cout << temp << endl;
			}
		}
		for (int j = 97; j < 122; j++) //lowercase a-z
		{
			string temp = s;
			
			//insert each letter from a-z and check if its in dictionary
			temp.insert(temp.begin() + i, char(j));
			if (myMap[temp])
			{
				cout << temp << endl;
			}
		}		
	}
}

void HashTable::deleteLetter(string s)
{
	for (int i = 0; i < s.size(); i++)
	{
		//delete next letter and check if its in dictionary
		string temp = s;
		temp.erase(temp.begin()+i);
		if (myMap[temp])
		{
			cout << temp << endl;
		}
	}

}

void HashTable::replaceLetter(string s)
{
	//similar to insertLetter, but char is assigned rather than inserted
	for (int i = 0; i < s.size(); i++)
	{
		for (int j = 65; j < 90; j++)
		{
			string temp = s;
			temp[i] = char(j);
			if (myMap[temp])
			{
				cout << temp << endl;
			}
		}
		for (int j = 97; j < 122; j++)
		{
			string temp = s;
			temp[i] = char(j);
			if (myMap[temp])
			{
				cout << temp << endl;
			}
		}		
	}
}

