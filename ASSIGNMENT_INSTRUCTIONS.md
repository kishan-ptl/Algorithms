# Algorithms
HW assignments from EC330

HW1)
Your programs must compile and run on the lab computers command-line interface. Make sure to write your name in a comment at the top of the program, along with your collaborator’s name, if any.
a) Implement the following C++ function:
long BinarySum (string fileName)
 The function receives as input the file name for a text file containing binary numbers (up to 32 bits each), separated by carriage returns, and returns the decimal sum of all the numbers. For example, for the provided file BinaryInput.txt, containing the numbers 0101111, 1100, 11001111, the program should output 266.
Your main function should receive a file name from the command line, call the BinarySum function with the provided file name, and print out the output returned. For example, suppose that you compile your program to the executable Problem4a, your program should be run as follows:
> Problem4a BinaryInput.txt
and should only print the output of the function (e.g. 266).
Hint: You may want to use the c_str() and strtol library functions.
   
EC330 Applied Algorithms and Data Structures for Engineers, Spring 2016
Submit your solution in a single file, Problem4a.cpp.   b) Implement the following C++ function:
string Analyze (string str, int size) 
The function receives as input a string str, and an integer 0 < size < 10, and returns the most frequently occurring sequence of ”size” characters in ”str”, with ties broken in favor of the first occurring sequence in the string. If str has fewer than ”size” characters, it returns the input str. 
For example, Analyze("aaaargh",1)=a, Analyze("cadabra abra",2)=ab, Analyze("I like apples. I like oranges.",6)="I like". Analyze("hi",3)="hi". Your main function should receive a string and an integer from the command line, call the Analyze function with the two inputs, and print out the output returned. 
For example, suppose that you compile your program to the executable Problem4b, your program should be run as follows:
> Problem4b “aaaargh" 1
Submit your solution in a single file, Problem4b.cpp.  

HW2)
Write and briefly explain the following C++ function:
int Sum (int *nums, int len); 
that accepts an integer array, nums, containing len > 0 positive integers, and returns the sum closest to 330 that was found by adding up to three integers in the array (where each element of the array can only be included once in the sum).
For example, if [nums] contains [10 100 200 2] and len==4, the function returns 310=200+100+10.
If [nums] contains [10 100 230 2] and len==4, the function returns 330=100+230.
Your program will be compiled with a main function on the lab computers. You may assume that the std namespace is being used and the following standard libraries have been included: iostream, iomanip, cmath, cstdlib, limits. Try to make your function as efficient as you can.
Submit your solution, in a single file, Problem3.cpp, containing your function. Make sure to write your name in a comment at the top of the program, and check that your program compiles with another file containing a main function on the lab computers.

HW3)
The files numCell.h and numCell.cpp implement the numCell class, which stores and
operates on storage cells for integers. main.cpp demonstrates how to use this class. The sum of integers is defined as an arithmetic sum, e.g. 1 + 2 + 3 = 6.
The sum of strings is defined as their concatenation, e.g. “abc” + “de” = “abcde”.
For each of the following tasks, your code must compile and run on the lab computers. Submit all your files. Make sure to write your name in a comment at the top of the main file, along with any special instructions on how to compile your code.
Your code will be graded based on:
★ How easy it is to read and understand
★ Whether it demonstrate good design and style
a. Implement a single class that can store and add either an integer or a string. You will need to implement a templatized version of the numCell class. 
Notice that while the declaration and implementation of classes are typically split between .cpp and .h files, some compilers cannot handle templates in separate files, so you may want to include both the declaration and implementation in a single .h file. 
Note that you may utilize the existing code, but this is not a requirement. You may either include your code in the numCell file, or in a separate file.
Compute the following sums, and provide the code that produced the result: i. 46 + 2 + 15
ii. “abra” + “cadabra”
iii. “temp“ + “lates “ + “are “ + “us” +”eful”
b. Implement a list class, whose elements could be integers or strings, which will implement the following methods:
write – accepts a list element, and adds it to the list
print – prints out the content of the list
sum – computes and returns the sum of all the list elements (may utilize the existing ‘+’ operator)
Create the following lists, print their content, and compute their sums; provide the code that produced the result:
i. 12 + 22
ii. “al” + “go” + “rith” + “ms”
c. The product of integers is defined as an arithmetic product, e.g. 2 * 3 *4 = 24. Now, let’s define the product of strings as interleaving concatenation of characters of the strings. For example, “hello” * “kids” = “hkeildlso”, and “hi” * “there” = “htihere”.
Add to your list class from part (b) the following overloaded operator:
* – computes and returns the product of the list elements, as defined above
Create the following lists, print their content, and compute their products; provide the code that produced the result:
i. 4 * 11
ii. “abcd” * “ef” * “ghijklm”

HW4)
You are provided an unordered linked list of n elements with integer values. Write a C++ class to sort the linked list in increasing order (smallest first) in O(n log n) worst case time using constant space (i.e. avoid recursion). 
You will upload your program and we will run it against large linked lists while measuring the run time.  You will be provided access to a LNode class, defined below:
public class LNode{ int val;
LNode *next;
LNode(int x){ val = x;
next = null; }
 }
 You will develop a class that fits the template below. The method sortList will return the head node of the sorted linked list of elements, taking as input the head node of the original list.
public class LSorter{
public LNode sortList(LNode head) // Your code goes in here...
} }
 You are provided with files for the class LNode, and for a main class that calls this program with a simple linked list to be sorted, and a shell class LSorter that needs to be completed by you. Modify and submit LSorter.cpp only.

HW5)
Implement a hash table with a spell-checker method SpellCheck(word), which performs a spell check on the string word, with respect to the set of words in a provided dictionary file dictionary.txt. If word is in the dictionary, then the call to
SpellCheck(s) prints out string word, since it is assumed to be spelled correctly in this case. Otherwise, if s is not in the dictionary, then call to SpellCheck(word) returns a list of every word in the dictionary that could be a correct spelling of word. 
Your program should be able to handle all the common ways that s might be a misspelling of a word in the dictionary, including swapping adjacent characters in a word, inserting a single character in between two adjacent characters in a word, deleting a single character from a word, and replacing a character in a word with another character.
A sample main.cpp is provided. Your task is to implement and submit the HashTable class in HashTable.h and HashTable.cpp such that it compiles with the provided file and provides the specified output (to the screen). Your program will be tested with other inputs as well. 
Extra credit will be given to efficient implementations, which should be submitted along with a description of the technique used.

HW6)
This problem involves finding information in a very large data file, BigData.txt, similar to what you might find from the dump of a hard drive. You may need to right click the file and select “save as”. Please let us know if you have trouble accessing the file.
Within this file, determine:
a. The number of BU-IDs in the file whose digits add to a number greater than 28. A
BU ID is defined as anything starting with a U and followed by exactly eight
digits and then a non-digit.
b. The number of English words (from the dictionary.txt file) that appear in the file
that do not end with the same letter of the alphabet as your last name (for example, if your last name ends with the letter ‘t’, then you should exclude dictionary words that end with ‘t’). The words do not need to be delimited by spaces (or other punctuation) in the file and may overlap.
The words must be contiguous e.g: door$knob or door knob will not find doorknob, but will still find
door, knob, or, etc. Duplicates do count. For example, the word “a”, which is a dictionary word, appears in the data more than once, and should be counted accordingly.
c. The longest palindrome (i.e. a string that equals its reverse) you can find within the text. When finding palindromes, consider ALL characters (spaces should count).
Provide your solutions (i.e. your output to each of the sections, along with a brief explanation of each of your solutions, in a file named Problem4.txt. Attach this file, along with all your solution code as an attachment problem4.zip.
Your code must be written in C++ and have three functions, fourA, fourB, and fourC, that when run with no arguments in the same directory as BigData.txt produce the results that you report.

