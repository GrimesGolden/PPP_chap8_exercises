#include "main.h";
// question #2
// Prints a vector if ints to cout
// print() passes by contant reference, because we don't want to copy a vector, and we will NOT modify. 
int main() {
	string message = "Here's some numbers!";
	vector<int> numbs = { 0, 1, 2, 3, 4, 5, 6, 7 ,8 , 9, 10 };
	print(message, numbs);
}