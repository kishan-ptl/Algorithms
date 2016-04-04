#include "HashTable.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) 
{
    if (argc <= 1)
    {
        cout << "Please supply a file name for the dictionary as input" << endl;
        return 1;
    }
    
    HashTable* hashTable = new HashTable(argv[1]);
    
    cout << "Spell checking...\n";
    
    hashTable->SpellCheck("spelling");
    hashTable->SpellCheck("spel");
    hashTable->SpellCheck("goiing");
    hashTable->SpellCheck("abcdefghijklmnop");
    
    return 0;
}


