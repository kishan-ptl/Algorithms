#ifndef HASHTABLE_H
//partner: Wonjae Yang

#define HASHTABLE_H

#include <iostream>
#include <string>
#include <map>
#include "HashTable.h"

using namespace std;

class HashTable 
{
	private:
		string fileName; 
		map<string,bool> myMap; //used map vector for dictionary
				
	public:
		HashTable(string fileName);
		void SpellCheck(string s);
		
		void swapLetter(string s);
		void insertLetter(string s);
		void deleteLetter(string s);
		void replaceLetter(string s);
	
		

};

#endif








	