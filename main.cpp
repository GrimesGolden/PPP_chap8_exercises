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
	vector<double> price = { 1, 2, 3, 4, 5 };
	vector<double> weight = { 10, 10, 10, 10, 10 };

	double index = price_weight(price, weight);
	cout << "The index is: " << index << " \n";

	// Now exercise 10
	vector<double> v_numbs = { 99, 3, 2, 4, 2, 1, 4, 4, 3, 5, 100, 6, 6, 5, 4, 3, 2, 1, 3, 2, 1, 0, 2, 1, 1, 2, 3, 57, 57, 57, 58, 32, 1, 32, 4, 27, 26, 25.4, 1, 99.8, 52};
	
	double small = 0;
	double large = 0;
	double mean = 0;
	double median = 0;

	stats(v_numbs, large, small, mean, median);

	cout << "Here are the statistics, largest number is: " << large << "\n";
	cout << "Smallest number is: " << small << "\n";
	cout << "The mean is: " << mean << "\n";
	cout << "The median is: " << median << "\n";

}