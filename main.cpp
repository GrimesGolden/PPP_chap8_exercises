#include "main.h";
int main() {

	// Utilize print() to cout a vector of ints and accompanying string message.
	string message = "Here's some numbers!";
	vector<int> numbs = { 1, 2, 3, 4, 5 };
	print(message, numbs);

	// Question 3/4
	// Create the fibbonaci() function
	// Print a vector filled using fibonnaci(), using print
	// Approximate the max int using this function.

	// After that, create two versions of reverse()
	// One creates a new vector, the other modifies an existing vector.
	// Both effectively reverse a vector
	// They are demonstrated below

	vector<int> fibbo;
	fibbonaci(1, 1, fibbo, 45);
	int approx_max = 1836311903;
	print("Fibbonaci sequence", fibbo);

	vector<int> rev_fibbo = reverse_v(fibbo);

	reverse_r(fibbo);

	print("Reversed fibb sequence by value: ", rev_fibbo);
	print("Reversed fibb sequence by reference: ", fibbo);

	vector<string> names;
	vector<double> ages;
	int size = 0;

	// We are now at excercise 7/8
	// Ask the user how many names they will enter, arbitrary size.
	cout << "How many names will you enter?";
	cin >> size;
	
	// Read and then sort these ages.

	read_age_name(names, ages, size);
	sort_age_name(names, ages);

	// Print out the now sorted age/name pairs, I chose to not make this a function, its a simple task. 

	for (int i = 0; i < names.size(); ++i) {
		cout << "NAME: " << names[i] << " AGE: " << ages[i] << "\n";
	}

	//exercise 9 comes next....

}