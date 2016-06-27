#include <fstream>
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
	ifstream inFile;
	inFile.open("map.txt");
	ofstream outFile;
	outFile.open("Problem4.txt");
	
	//used to parse text file
	string s; 
	string d;
	string n;
	string c;
	
	map<string, map<string,int> > myMap;
	set<string> mySet;
	set<string>::iterator iter;
	vector<string> myVector;
	
	//parse text file into a Map
	for (int y = 0; y < 1346039; y++)
	{
		getline(inFile, s, ' ');
		getline(inFile, d, ':');
		getline(inFile, n, ' ');
		getline(inFile, c);
		mySet.insert(s);
		myMap[s][d.substr(4,4)] = atoi(c.c_str());	
	}
			
	string currentSource = "ETCW"; //initial conditions
	myVector.push_back(currentSource);
	mySet.erase(currentSource);
	
	string nextSource; //next place we travel to
	int minCost = 100000; //starting off high
	int finalCost = 0; 

	for (int i = 0; i < 1494; i++)
	{		
		for (iter = mySet.begin(); iter != mySet.end(); ++iter)
		{
			//if cost to dest is cheapest, this is our next dest.
			if (myMap[currentSource][*iter] < minCost && myMap[currentSource][*iter] != 0)
			{
				minCost = myMap[currentSource][*iter];
				nextSource = *iter;
			}
		}
		
		//cheapest dest is our next source
		currentSource = nextSource;
		myVector.push_back(currentSource);
 		mySet.erase(currentSource); //won't be traveling back there
 		finalCost += minCost;
 		minCost = 100000; //start off high once again for next source
	}
	finalCost += myMap[currentSource]["ETCW"]; //final conditions
	myVector.push_back("ETCW"); 
	
	//write to file
	outFile << finalCost << endl;	
	for (int i = 0; i < myVector.size(); i++)
	{
		outFile << myVector[i] << endl;
	}
}


	
	
