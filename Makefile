# We are using the C++11 standard
GCC11 = g++ -std=c++0x

# C++11 compilation. Just type "make all" (without quotes) in the terminal while in your working directory
all: main.o 
	${GCC11} main.o -o route

main.o: main.cpp
	${GCC11} -c main.cpp -o main.o

# Clean your working directory. Type "make clean" in your working directory to get rid of object files and executables (.h and .cpp files will be unaffected)
# Note that running "make clean" is a safe operation, you won't lose any code you've written
clean:
	rm main.o route
